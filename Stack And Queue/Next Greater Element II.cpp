class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
    int n=nums.size();
    vector<int>res(2*n);
    nums.resize(2*n);
    for(int i=n;i<2*n;i++){
        nums[i]=nums[i-n];
    }
    stack<int>st;
    //n=nums.size();
    for(int i=2*n-1;i>=0;i--){
        while(!st.empty() && st.top()<=nums[i]){
            st.pop();
        }
        if(st.empty()){
            res[i]=-1;
        }
        else{
            res[i]=st.top();
        }
        st.push(nums[i]);
    }
    for(int i=0;i<n;i++) res.pop_back();
    return res;
    }
};
