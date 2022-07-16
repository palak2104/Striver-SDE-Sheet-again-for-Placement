class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        stack<TreeNode*>st;
        st.push(root);
        while(!st.empty()){
            TreeNode* node=st.top();
            st.pop();
            res.push_back(node->val);
            if(node->right) st.push(node->right);
            if(node->left) st.push(node->left);
        }
        return res;
    }
};
