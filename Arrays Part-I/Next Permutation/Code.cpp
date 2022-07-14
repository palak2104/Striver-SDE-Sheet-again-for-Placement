class Solution {
public:
    void nextPermutation(vector<int>&arr) {
        int n=arr.size();
        int i=n-1;
        while(i>=1 && arr[i-1]>=arr[i]) i--;
        if(i==0){
            reverse(arr.begin(),arr.end());
            return;
        }
        i--;
        for(int j=n-1;j>i;j--){
        if(arr[j]>arr[i]){
        swap(arr[i],arr[j]);
        break;
        }
        }
        reverse(arr.begin()+i+1,arr.end());
    }
};
