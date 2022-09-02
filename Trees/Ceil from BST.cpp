void func(BinaryTreeNode<int>*node,int x,int &ans){
    if(!node) return;
    if(node->data==x){
        ans=node->data;
        return;
    }
    if(node->data>x){
        ans=node->data;
        func(node->left,x,ans);
        return;
    }
    else{
       func(node->right,x,ans);
       return; 
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.
    int ans=-1;
    func(node,x,ans);
    return ans;
}
