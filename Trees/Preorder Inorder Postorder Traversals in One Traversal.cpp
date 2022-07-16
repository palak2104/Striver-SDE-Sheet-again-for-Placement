#include<bits/stdc++.h>
vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here
    vector<vector<int>>fres;
    if(!root) return fres;
    stack<pair<BinaryTreeNode<int>*,int>>st;
    st.push({root,1});
    vector<int>preorder,inorder,postorder;
    while(!st.empty()){
    auto it=st.top();
    st.pop();
    BinaryTreeNode<int>* node=it.first;
    int num=it.second;
    if(num==1){
    preorder.push_back(node->data);
    it.second++;
    st.push(it);
    if(node->left) st.push({node->left,1});
    }
    else if(num==2){
    inorder.push_back(node->data);
    it.second++;
    st.push(it);
    if(node->right) st.push({node->right,1});   
    }
    else if(num==3){
    postorder.push_back(node->data);
    }
    }
    fres.push_back(inorder);
    fres.push_back(preorder);
    fres.push_back(postorder);
    return fres;
}
