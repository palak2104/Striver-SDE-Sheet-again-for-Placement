int lcs(string &a, string &b){
	//	Write your code here.
    int n=a.length();
    int m=b.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,0));
    int maxi=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
            dp[i][j]=1+dp[i-1][j-1];
            maxi=max(maxi,dp[i][j]);
            }
        }
    }
    return maxi;
}
