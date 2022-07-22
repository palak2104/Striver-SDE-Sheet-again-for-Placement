class Solution 
{   bool func(int mid,int arr[],int n,int m){
    int sum=0;
    int count=1;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>mid){
            sum=arr[i];
            count++;
        }
        else{
            sum+=arr[i];
        }
    }
    return (count<=m);
    }
    public:
    //Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        //code here
        int sum=0;
        int maxi=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            maxi=max(maxi,arr[i]);
        }
        int low=maxi;
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(func(mid,arr,n,m)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
