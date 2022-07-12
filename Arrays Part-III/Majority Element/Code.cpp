class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int ele=-1, count=1;
        for(int i=0;i<n;i++){
        if(arr[i]==ele){
            count++;
        }
        else count--;
        if(count==0){
            ele=arr[i];
            count=1;
        }
        }
        return ele;
    }
};
