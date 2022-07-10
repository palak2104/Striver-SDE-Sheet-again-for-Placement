class Solution {
public:
    int longestConsecutive(vector<int>&arr) {
        unordered_map<int,int>m;
        for(auto it:arr) m[it]=1;
        int maxi=INT_MIN;
        for(auto it:arr){
        if(m[it+1]) continue;
         int count=0;
         while(m[it]){
             count++;
             it--;
         }
            maxi=max(maxi,count);
        }
        if(maxi==INT_MIN) return 0;
        return maxi;
    }
};
