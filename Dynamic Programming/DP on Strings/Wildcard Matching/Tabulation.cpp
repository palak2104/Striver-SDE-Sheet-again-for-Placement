class Solution {
bool isAllStars(string & S1, int i) {
  for (int j = 1; j <= i; j++) {
    if (S1[j - 1] != '*')
      return false;
  }
  return true;
}
public:
    bool isMatch(string b, string a) {
    int n=a.length();
    int m=b.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1));
    dp[0][0]=1;
    for(int j=1;j<=m;j++) dp[0][j]=0;
    for (int i = 1; i <= n; i++) {
    dp[i][0] = isAllStars(a, i);
    }
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {

      if (a[i - 1] == b[j - 1] || a[i - 1] == '?')
        dp[i][j] = dp[i - 1][j - 1];

      else {
        if (a[i - 1] == '*')
          dp[i][j] = dp[i - 1][j] || dp[i][j - 1];

        else dp[i][j] = 0;
      }
    }
  }

  return dp[n][m];

    }
};
