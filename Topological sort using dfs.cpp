class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	void func(int node,vector<int>adj[],vector<int>&vis,stack<int>&st){
	    vis[node]=1;
	    for(auto it:adj[node]){
	    if(!vis[it]){
	        func(it,adj,vis,st);
	    }
	    }
	    st.push(node);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   vector<int>vis(V,0);
	   vector<int>res;
	   stack<int>st;
	   for(int i=0;i<V;i++){
	       if(!vis[i]){
	       func(i,adj,vis,st);
	       }
	   }
	   //for(auto it:res) cout<<it<<" ";
	   while(!st.empty()){
	           res.push_back(st.top());
	           st.pop();
	       }
	return res;
	}
};
