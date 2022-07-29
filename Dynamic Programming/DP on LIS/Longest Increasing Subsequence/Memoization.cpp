class Solution {
    int func(int i,int prev,int n,vector<int>&arr,vector<vector<int>>&dp){
    if(i==0) return 0;
    if(dp[i][prev]!=-1) return dp[i][prev];
    int a=INT_MIN;
    if(prev==n||arr[i-1]<arr[prev])
    a=1+func(i-1,i-1,n,arr,dp);
    int b=func(i-1,prev,n,arr,dp);
    return dp[i][prev]=max(a,b);
    }
public:
    int lengthOfLIS(vector<int>&arr) {
        int n=arr.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return func(n,n,n,arr,dp);
    }
};
