class Solution {
public:
    vector<int> nextGreaterElement(vector<int>&brr, vector<int>&arr) {
        stack<int>st;
        unordered_map<int,int>m;
        int n=arr.size();
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<arr[i]){
                st.pop();
            }
            if(st.empty()){
                m[arr[i]]=-1;
            }
            else{
                m[arr[i]]=st.top();
            }
            st.push(arr[i]);
        }
        vector<int>res;
        for(auto it:brr){
            res.push_back(m[it]);
        }
        return res;
    }
};
