class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool comp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second<b.second;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>arr(n);
        for(int i=0;i<n;i++){
            arr[i].first=start[i];
            arr[i].second=end[i];
        }
        sort(arr.begin(),arr.end(),comp);
        int count=1;
        int s=arr[0].first;
        int e=arr[0].second;
        for(int i=1;i<n;i++){
            if(arr[i].first>e){
                count++;
                e=arr[i].second;
            }
        }
        return count;
    }
};
