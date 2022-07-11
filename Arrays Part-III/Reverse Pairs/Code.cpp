class Solution {
    int count=0;
    void func(int low,int high,vector<int>&arr){
        if(low>=high) return;
        int mid=(high+low)/2;
        func(low,mid,arr);
        func(mid+1,high,arr);
        int j=mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && arr[i]/2.0 >arr[j]) j++;
            count+=j-(mid+1);
        }
        sort(arr.begin()+low,arr.begin()+high+1);
    }
public:
    int reversePairs(vector<int>&arr) {
      int n=arr.size();
      func(0,n-1,arr);
      return count;
    }
};
