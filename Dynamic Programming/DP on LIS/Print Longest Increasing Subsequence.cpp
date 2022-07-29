class Solution {
public:
    int lengthOfLIS(vector<int>&arr) {
        int n=arr.size();
        vector<int>dp(n,1),hash(n);
        int max_index,maxi=1;
        for(int i=0;i<n;i++) hash[i]=i;
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(arr[j]<arr[i] && dp[i]<dp[j]+1){
                    dp[i]=dp[j]+1;
                    hash[i]=j;
                }
            }
        if(dp[i]>maxi){
            maxi=dp[i];
            max_index=i;
        }
        }
        vector<int>temp;
        temp.push_back(arr[max_index]);
        while(hash[max_index]!=max_index){
            max_index=hash[max_index];
            temp.push_back(arr[max_index]);
        }
        reverse(temp.begin(),temp.end());
        for(auto it:temp) cout<<it<<" ";
        cout<<endl;
        return maxi;
    }
};
