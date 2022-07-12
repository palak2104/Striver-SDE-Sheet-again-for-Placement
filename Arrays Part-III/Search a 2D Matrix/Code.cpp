class Solution {
public:
    bool searchMatrix(vector<vector<int>>&arr, int target) {
        int n=arr.size();
        int m=arr[0].size();
        int index=-1;
        int low=0, high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            int x=arr[mid][0];
            if(x==target) return true;
            if(x<target){
                index=mid;
                low=mid+1;
            }
            else high=mid-1;
        }
        if(index==-1) return false;
        cout<<index;
        low=0, high=m-1;
        while(low<=high){
          int mid=(low+high)/2;
          int x=arr[index][mid];  
          if(x==target) return true;
          if(x<target) low=mid+1;
          else high=mid-1;
        }
        return false;
    }
};
