class Solution {
public:
    int maxProfit(vector<int>&arr) {
        int maxi=INT_MIN, maxp=INT_MIN;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
            else{
                maxp=max(maxp,maxi-arr[i]);
            }
        }
        return maxp==INT_MIN?0:maxp;
    }
};
