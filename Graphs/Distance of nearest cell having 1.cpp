class Solution 
{
    bool isValid(int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m) return false;
        return true;
    }
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n=grid.size();
	    int m=grid[0].size();
	    queue<pair<int,int>>q;
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            if(grid[i][j]==1) q.push({i,j});
	        }
	    }
	    while(!q.empty()){
	        auto it=q.front();
	        q.pop();
	        int i=it.first;
	        int j=it.second;
	        vector<int>dx{-1,0,1,0};
            vector<int>dy{0,1,0,-1};
            for(int k=0;k<4;k++){
            int x=i+dx[k];
            int y=j+dy[k];
            if(isValid(x,y,n,m)){
                if(grid[x][y]==0){
                grid[x][y]=1+grid[i][j];
                q.push({x,y});
                }
            }
            }
	    }
	    for(int i=0;i<n;i++){
	        for(int j=0;j<m;j++){
	            grid[i][j]-=1;
	        }
	    }
	    return grid;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends
