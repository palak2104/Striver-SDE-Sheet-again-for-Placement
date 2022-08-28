class Solution {
    int func(TreeNode* root,int d,int &maxi){
        if(!root) return 0;
        int x;
        if(d==0){
        x=1+func(root->left,1,maxi);
        maxi=max(maxi,func(root->right,0,maxi));
        }
        else{
        x=1+func(root->right,0,maxi);
        maxi=max(maxi,func(root->left,1,maxi)); 
        }
        return x;
    }
public:
    int longestZigZag(TreeNode* root) {
        int maxi=INT_MIN;
        int a=func(root->right,0,maxi);
        int b=func(root->left,1,maxi);
        return max(maxi,max(a,b));
    }
};
