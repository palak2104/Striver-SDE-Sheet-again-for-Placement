class Solution {
public:
    int largestRectangleArea(vector<int>&arr) {
        int n=arr.size();
        vector<int>right(n),left(n);
        stack<int>r,l;
        for(int i=0;i<n;i++){
            while(!r.empty() && arr[r.top()]>=arr[i]){
                r.pop();
            }
            if(r.empty()) right[i]=-1;
            else right[i]=r.top();
            r.push(i);
        }
        for(int i=n-1;i>=0;i--){
            while(!l.empty() && arr[l.top()]>=arr[i]){
                l.pop();
            }
            if(l.empty()) left[i]=n;
            else left[i]=l.top();
            l.push(i);
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            maxi=max(maxi,(left[i]-right[i]-1)*arr[i]);
        }
        return maxi;
    }
};
