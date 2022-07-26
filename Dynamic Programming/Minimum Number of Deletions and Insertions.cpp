int canYouMake(string &text1, string &text2)
{
    // Write your code here.
    int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
               int res=0;
               if(text1[i-1]==text2[j-1])
               res=1+dp[i-1][j-1];
               else{
               res=max(dp[i][j-1],dp[i-1][j]);
               }
            dp[i][j]=res; 
            }
        }
    return m+n-(2*dp[n][m]);
}
