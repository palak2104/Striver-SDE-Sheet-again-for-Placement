class Solution {
public:
    int lengthOfLIS(vector<int>&arr) {
        vector<int>temp;
        for(auto it:arr){
            if(temp.size()==0){
                temp.push_back(it);
            }
            else{
                int low=0;
                int high=temp.size()-1;
                int ans=-1;
                while(low<=high){
                    int mid=(low+high)/2;
                    if(temp[mid]>=it){
                        ans=mid;
                        high=mid-1;
                    }
                    else low=mid+1;
                }
                if(ans==-1) temp.push_back(it);
                else temp[ans]=it;
            }
        }
        return temp.size();
    }
};
