class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        vector<connect>arr(n);
        for(int i=0;i<M.size();i++){
            for(int j=0;j<M[i].size();j++){
                if(M[i][j]==1){
                    arr[i].out++;
                    arr[j].in++;
                }
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i].in==n-1 && arr[i].out==0)
            return i;
        }
        return -1;
        
    }
};
