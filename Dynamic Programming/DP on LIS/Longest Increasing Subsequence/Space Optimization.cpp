class Solution {
public:
    int lengthOfLIS(vector<int>&arr) {
        int n=arr.size();
        vector<int>dp(n+1);
        for(int i=1;i<=n;i++){
            vector<int>temp(n+1);
            for(int prev=1;prev<=n;prev++){
              int a=INT_MIN;
              if(prev==n||arr[i-1]<arr[prev])
              a=1+dp[i-1];
              int b=dp[prev];
              temp[prev]=max(a,b);  
            }
        dp=temp;
        }
        return dp[n];
    }
};
