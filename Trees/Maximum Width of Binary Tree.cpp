class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode*,long long>>q;
        q.push({root,0});
        long long width=0;
        while(!q.empty()){
            int n=q.size();
            long long first,last;
            for(int i=0;i<n;i++){
               auto it=q.front();
                q.pop();
                TreeNode* node=it.first;
                long long k=it.second;
                if(i==0) first=k;
                if(i==n-1) last=k;
                k=k-first;
                if(node->left)
                q.push({node->left,2*k+1});
                if(node->right)
                q.push({node->right,2*k+2});
            }
            width=max(width,last-first+1);
        }
        return (int) width;
    }
};
