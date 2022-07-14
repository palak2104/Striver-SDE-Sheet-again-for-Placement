class Solution {
public:
    int maxSubArray(vector<int>& arr) {
      int maxSum=INT_MIN;
      int sum=0;
        int n=arr.size();
      for(int i=0;i<n;i++){
          sum=max(arr[i],sum+arr[i]);
          maxSum=max(maxSum,sum);
      }
      return maxSum;
    }
};
