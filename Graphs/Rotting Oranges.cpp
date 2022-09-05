class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
    int n=grid.size();
    int m=grid[0].size();
    queue<pair<int,int>>q;
    for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
            if(grid[i][j]==2){
                q.push({i,j});
            }
        }
    }
    int count=0;
    while(!q.empty()){
    count++;
    int s=q.size();
    for(int k=0;k<s;k++){
    auto it=q.front();
    q.pop();
    int i=it.first;
    int j=it.second;
    vector<int>dx{-1,0,1,0};
    vector<int>dy{0,1,0,-1};
    for(int p=0;p<4;p++){
    int x=i+dx[p];
    int y=j+dy[p];
    if(x<0 || x>=n || y<0 || y>=m) continue;
        if(grid[x][y]==1){
        grid[x][y]=2;
        q.push({x,y});
        }
    }
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1) return -1;
        }
    }
    if(count==0) return 0;
    return count-1;
    }
};
