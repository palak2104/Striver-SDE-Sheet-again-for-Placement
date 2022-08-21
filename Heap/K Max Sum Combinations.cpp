#include<bits/stdc++.h>
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    priority_queue<pair<int,pair<int,int>>>pq;
    int i=a.size()-1;
    int j=b.size()-1;
    set<pair<int,int>>st;
    pq.push({a[i]+b[j],{i,j}});
    vector<int>res;
    for(int count=0;count<k;count++){
        auto it=pq.top();
        pq.pop();
        res.push_back(it.first);
        i=it.second.first;
        j=it.second.second;
        pair<int,int> x;
        x.first=i-1;
        x.second=j;
        if(st.find(x)==st.end()){
            pq.push({a[i-1]+b[j],{i-1,j}});
            st.insert(x);
        }
        pair<int,int> y;
        y.first=i;
        y.second=j-1;
        if(st.find(y)==st.end()){
            pq.push({a[i]+b[j-1],{i,j-1}});
            st.insert(y);
        }
    }
    return res;
}
