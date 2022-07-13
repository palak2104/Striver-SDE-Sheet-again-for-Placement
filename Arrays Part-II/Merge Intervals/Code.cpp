class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&arr) {
    sort(arr.begin(),arr.end());
    int start=arr[0][0],end=arr[0][1];
    vector<vector<int>>res;
    int n=arr.size();
    for(int i=1;i<n;i++){
        if(arr[i][0]>end){
            res.push_back({start,end});
            start=arr[i][0];
            end=arr[i][1];
        }
        else{
            end=max(end,arr[i][1]);
        }
    }
    res.push_back({start,end});
    return res;
    }
};
