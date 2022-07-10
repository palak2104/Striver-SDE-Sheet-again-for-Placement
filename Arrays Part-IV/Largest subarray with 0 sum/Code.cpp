class Solution{
    public:
    int maxLen(vector<int>&arr, int n)
    {   
        // Your code here
        int sum=0;
        unordered_map<int,int>m;
        int count=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(sum==0) count=max(count,i+1);
            else if(m.find(sum)!=m.end()){
                count=max(count,i-m[sum]);
            }
            else{
                m[sum]=i;
            }
        }
        
        if(count==INT_MIN) return 0;
        return count;
    }
};
