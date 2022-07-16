class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        if(!root) return res;
        stack<TreeNode*>st,temp;
        st.push(root);
        while(true){
        if(!st.empty()){
        TreeNode* node=st.top();
        st.pop();
        res.push_back(node->val);
        if(node->left) temp.push(node->left);
        if(node->right) st.push(node->right);
        }  
        else{
        if(temp.empty()) break;
        st.push(temp.top());
        temp.pop();
        }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
