class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        vector<int>res;
        int n1=-1e9-1,n2=-1e9-1,c1=0,c2=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==n1) c1++;
            else if(arr[i]==n2) c2++;
            else if(c1==0){
                n1=arr[i];
                c1=1;
            }
            else if(c2==0){
                n2=arr[i];
                c2=1;
            }
            else{
                c1--;
                c2--;
            }
        }
        c1=0; c2=0;
        for(int i=0;i<n;i++){
            if(arr[i]==n1) c1++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==n2) c2++;
        }
        if(c1>n/3) res.push_back(n1);
        if(c2>n/3) res.push_back(n2);
        return res;
    }
};
