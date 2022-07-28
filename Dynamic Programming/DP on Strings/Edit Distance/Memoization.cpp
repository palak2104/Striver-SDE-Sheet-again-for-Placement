int func(int i,int j,string a,string b,vector<vector<int>>&dp){
    if(i==0) return j;
    if(j==0) return i;
    if(dp[i][j]!=-1) return dp[i][j];
    if(a[i-1]==b[j-1]){
        return dp[i][j]=func(i-1,j-1,a,b,dp);
    }
    else{
        int insert=1+func(i,j-1,a,b,dp);
        int delet= 1+func(i-1,j,a,b,dp);
        int replace=1+func(i-1,j-1,a,b,dp);
        return dp[i][j]=min(insert,min(delet,replace));
    }
}
int editDistance(string a, string b)
{
    //write you code here
    int n=a.length();
    int m=b.length();
    vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
    return func(n,m,a,b,dp);
}
