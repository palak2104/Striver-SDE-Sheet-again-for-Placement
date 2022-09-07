class Solution {
public:
    int maxProduct(vector<int>&arr) {
    int maxi=arr[0],mini=arr[0],res=arr[0];
    for(int i=1;i<arr.size();i++){
    if(arr[i]<0) swap(maxi,mini);
    maxi=max(arr[i],arr[i]*maxi);
    mini=min(arr[i],arr[i]*mini);
    res=max(res,maxi);
    }
    return res;
    }
};
