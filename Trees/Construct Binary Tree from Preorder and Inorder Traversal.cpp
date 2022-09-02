class Solution {
     TreeNode* func(vector<int>&pre,int preStart,int preEnd, vector<int>&in,int inStart,int inEnd,unordered_map<int,int>m)      {
     if(preStart>preEnd || inStart>inEnd) return NULL;
     TreeNode* node=new TreeNode(pre[preStart]);
     int i=m[pre[preStart]];
     int lgap=i-inStart;
     node->left=func(pre,preStart+1,preStart+lgap,in,inStart,i-1,m);
     node->right=func(pre,preStart+lgap+1,preEnd,in,i+1,inEnd,m);
     return node;
     }
public:
    TreeNode* buildTree(vector<int>& pre, vector<int>& in) {
        unordered_map<int,int>m;
        for(int i=0;i<in.size();i++) m[in[i]]=i;
        int preStart=0;
        int preEnd=pre.size()-1;
        int inStart=0;
        int inEnd=in.size()-1;
        return func(pre,preStart,preEnd,in,inStart,inEnd,m);
    }
};
