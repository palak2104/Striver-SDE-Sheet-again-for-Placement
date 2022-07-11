class Solution {
public:
    vector<int> twoSum(vector<int>&arr, int target) {
        vector<pair<int,int>>res;
        for(int i=0;i<arr.size();i++){
            res.push_back({arr[i],i});
        }
        sort(res.begin(),res.end());
        vector<int>none;
        int low=0, high=arr.size()-1;
        while(low<high){
            int sum=res[low].first+res[high].first;
            cout<<sum<<" ";
            if(sum==target){
                vector<int>fres;
                fres.push_back(res[low].second);
                fres.push_back(res[high].second);
                return fres;
            }
            else if(sum<target) low++;
            else high--;
        }
        return none;
    }
};
