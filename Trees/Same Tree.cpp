class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q) return true;
        if(!p && q) return false;
        if(p && !q) return false;
        if(p->val !=q->val) return false;
        bool a=isSameTree(p->left,q->left);
        bool b=isSameTree(p->right,q->right);
        if(!a || !b) return false;
        if(p->val==q->val) return true;
        return false;
    }
};
