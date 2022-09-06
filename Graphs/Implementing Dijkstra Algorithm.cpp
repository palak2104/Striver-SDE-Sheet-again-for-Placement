class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        vector<int>dist(V,INT_MAX);
        dist[S]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        vector<int>vis(V,0);
        pq.push({dist[S],S});
        while(!pq.empty()){
        auto x=pq.top();
        pq.pop();
        vis[x.second]++;
        int d=x.first;
        int node=x.second;
        for(auto it:adj[node]){
        if(!vis[it[0]] && it[1]+d<dist[it[0]]){
        dist[it[0]]=d+it[1];
        pq.push({dist[it[0]],it[0]});
        }
        }
        }
        return dist;
    }
};
