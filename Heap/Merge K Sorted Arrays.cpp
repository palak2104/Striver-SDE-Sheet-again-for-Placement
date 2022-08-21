#include<bits/stdc++.h>
vector<int> mergeKSortedArrays(vector<vector<int>>&arr, int k)
{
    // Write your code here. 
    priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
    int n=arr.size();
    for(int i=0;i<n;i++){
        pq.push({arr[i][0],{i,0}});
    }
    vector<int>res;
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        res.push_back(it.first);
        int i=it.second.first;
        int j=it.second.second;
        if(j+1!=arr[i].size()){
            pq.push({arr[i][j+1],{i,j+1}});
        }
    }
    return res;
}
