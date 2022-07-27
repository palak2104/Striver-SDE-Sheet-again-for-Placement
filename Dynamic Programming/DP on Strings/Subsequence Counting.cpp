int func(int i,int j,string a,string b,vector<vector<int>>&dp){
    if(j==0) return 1;
    if(i==0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int mod=1e9+7;
    if(a[i-1]==b[j-1]){
        return dp[i][j]=(func(i-1,j-1,a,b,dp)+func(i-1,j,a,b,dp))%mod;
    }
    else return dp[i][j]=func(i-1,j,a,b,dp);
}
int subsequenceCounting(string &a, string &b, int n, int m) {
    // Write your code here.
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return func(n,m,a,b,dp);
} 
