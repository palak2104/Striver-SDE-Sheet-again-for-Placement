class Solution
{
	public:
	//Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        // code here
        vector<int>dist(V,INT_MAX);
        vector<bool>mst(V,false);
        vector<int>par(V,-1);
        dist[0]=0;
        par[0]=-1;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,0});
        while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int node=it.second;
        mst[node]=true;
        for(auto it:adj[node]){
        if(dist[it[0]]>it[1] && mst[it[0]]==false){
            dist[it[0]]=it[1];
            par[it[0]]=node;
            pq.push({dist[it[0]],it[0]});
        }   
        }
        }
    int sum=0;
    for(auto it:dist) sum+=it;
    return sum;
    }
};

//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        
        Solution obj;
    	cout << obj.spanningTree(V, adj) << "\n";
    }

    return 0;
}


// } Driver Code Ends
