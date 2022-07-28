class Solution {
    bool func(int i,int j,string a,string b,vector<vector<int>>&dp){
    if(i==0 && j==0) return true;
    if(i==0 && j>=0) return false;
    if(j==0){
        while(i!=0){
            if(a[i-1]!='*') return false;
            i--;
        }
        return true;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    if(a[i-1]==b[j-1] || a[i-1]=='?'){
        return dp[i][j]=func(i-1,j-1,a,b,dp);
    }
    else if(a[i-1]=='*'){
        return dp[i][j]=func(i-1,j,a,b,dp)||func(i,j-1,a,b,dp);
    }
    else{
        return false;
    }
}
public:
    bool isMatch(string b, string a) {
    int n=a.length();
    int m=b.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return func(n,m,a,b,dp);
    }
};
