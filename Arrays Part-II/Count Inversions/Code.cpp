void func(long long low,long long high,long long *arr,long long &count){
        if(low>=high) return;
        long long mid=(low+high)/2;
        func(low,mid,arr,count);
        func(mid+1,high,arr,count);
        long long j=mid+1;
        for(long long i=low;i<=mid;i++){
            while(j<=high && arr[i]>arr[j]) j++;
            count+=j-(mid+1);
        }
        sort(arr+low,arr+high+1);
    }
long long getInversions(long long *arr, int n){
    // Write your code here.
    long long count=0;
    func(0,n-1,arr,count);
    return count;
}
