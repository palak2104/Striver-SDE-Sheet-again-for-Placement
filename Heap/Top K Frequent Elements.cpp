class Solution {
public:
    vector<int> topKFrequent(vector<int>&arr, int k) {
        unordered_map<int,int>m;
        for(auto it:arr) m[it]++;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(auto it:m){
            pq.push({it.second,it.first});
            if(pq.size()>k) pq.pop();
        }
        vector<int>res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
