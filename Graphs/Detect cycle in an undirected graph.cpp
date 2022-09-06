class Solution {
    bool iscycle(int node,int par,vector<int>adj[],vector<int>&vis){
        vis[node]=1;
        for(auto it:adj[node]){
        if(!vis[it]){
        if(iscycle(it,node,adj,vis)) return true;
        }
        else if(it!=par) return true;
        }
        return false;
    }
  public:
    // Function to detect cycle in an undirected graph.
    bool isCycle(int n, vector<int> adj[]) {
        // Code here
        vector<int>vis(n,0);
        for(int i=0;i<n;i++){
        if(!vis[i]){
        if(iscycle(i,-1,adj,vis)) return true;
        }
        }
        return false;
    }
};
