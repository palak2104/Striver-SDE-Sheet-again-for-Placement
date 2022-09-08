class Solution {
    int func(int i,int buy,int k,vector<int>prices,vector<vector<vector<int>>>&dp){
        if(i==prices.size() || k==0) return 0;
        if(dp[i][buy][k]!=-1) return dp[i][buy][k];
        int a,b;
        if(buy==0){
        a=func(i+1,0,k,prices,dp);
        b=-prices[i]+func(i+1,1,k,prices,dp);
        }
        if(buy==1){
        a=func(i+1,1,k,prices,dp);
        b=prices[i]+func(i+1,0,k-1,prices,dp);
        }
        return dp[i][buy][k]=max(a,b);
    }
public:
    int maxProfit(int k, vector<int>& prices) {
    int n=prices.size();
    vector<vector<vector<int>>>dp(n+1,vector<vector<int>>(2,vector<int>(k+1,-1)));
    return func(0,0,k,prices,dp);    
    }
};
