class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>fres;
        if(!root) return fres;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>res;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();
                q.pop();
                res.push_back(node->val);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            fres.push_back(res);
        }
        return fres;
    }
};
