class Solution {
    TreeNode* func(vector<int>post,int pStart,int pEnd,vector<int>in,int inStart,int inEnd,unordered_map<int,int>m){
        if(pStart>pEnd || inStart>inEnd) return NULL;
        TreeNode* node=new TreeNode(post[pEnd]);
        int i=m[post[pEnd]];
        int lgap=i-inStart;
        node->left=func(post,pStart,pStart+lgap-1,in,inStart,i-1,m);
        node->right=func(post,pStart+lgap,pEnd-1,in,i+1,inEnd,m);
        return node;
    }
public:
    TreeNode* buildTree(vector<int>& in, vector<int>& post) {
        unordered_map<int,int>m;
        for(int i=0;i<in.size();i++){
            m[in[i]]=i;
        }
        int pStart=0;
        int pEnd=post.size()-1;
        int inStart=0;
        int inEnd=in.size()-1;
        return func(post,pStart,pEnd,in,inStart,inEnd,m);
    }
};
