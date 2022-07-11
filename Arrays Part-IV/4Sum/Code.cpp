class Solution {
public:
    vector<vector<int>> fourSum(vector<int>&arr, int target) {
        vector<vector<int>>fres;
        if(target==-294967296 || target==294967296) return fres;
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if (arr.empty())
        return fres;
        for(int i=0;i<n;i++){
            int y=target-arr[i];
            for(int j=i+1;j<n;j++){
                int x=y-arr[j];
                int low=j+1;
                int high=n-1;
                while(low<high){
                   int sum=arr[low]+arr[high];
                   if(sum==x){
                       vector<int>res;
                       res.push_back(arr[i]);
                       res.push_back(arr[j]);
                       res.push_back(arr[low]);
                       res.push_back(arr[high]);
                       fres.push_back(res);
                       int u=arr[low];
                       int v=arr[high];
                       while(low<high && u==arr[low]) low++;
                       while(low<high && v==arr[high]) high--;
                   }
                   else if(sum<x) low++;
                   else high--;
                }
                while(j+1<n && arr[j+1]==arr[j]) j++;
            }
        while(i+1<n && arr[i+1]==arr[i]) i++;
        }
        return fres;
    }
};
