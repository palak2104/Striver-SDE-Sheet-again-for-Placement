class Solution {
public:
    int lengthOfLIS(vector<int>&arr) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1));
        //return func(n,n,n,arr,dp);
        for(int i=1;i<=n;i++){
            for(int prev=1;prev<=n;prev++){
              int a=INT_MIN;
              if(prev==n||arr[i-1]<arr[prev])
              a=1+dp[i-1][i-1];
              int b=dp[i-1][prev];
              dp[i][prev]=max(a,b);  
            }
        }
        return dp[n][n];
    }
};
