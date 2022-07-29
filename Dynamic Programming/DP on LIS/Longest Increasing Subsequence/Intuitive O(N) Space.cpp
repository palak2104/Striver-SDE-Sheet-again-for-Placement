class Solution {
public:
    int lengthOfLIS(vector<int>&arr) {
        int n=arr.size();
        vector<int>dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i]){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        int maxi=1;
        for(auto it:dp) maxi=max(maxi,it);
        return maxi;
    }
};
