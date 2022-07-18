class Solution {
    bool isLeaf(Node* root){
        if(!root->left && !root->right) return true;
        return false;
    }
    void lTraversal(Node* root, vector<int>&res){
        if(isLeaf(root)) return;
        res.push_back(root->data);
        if(root->left){
            lTraversal(root->left,res);
        }
        else{
           lTraversal(root->right,res); 
        }
    }
    void leafTraversal(Node* root,vector<int>&res){
        if(!root) return;
        if(isLeaf(root)) res.push_back(root->data);
        leafTraversal(root->left,res);
        leafTraversal(root->right,res);
    }
    void rTraversal(Node* root, stack<int>&st){
        if(isLeaf(root)) return;
        st.push(root->data);
        if(root->right){
            rTraversal(root->right,st);
        }
        else{
           rTraversal(root->left,st); 
        } 
    }
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int>res;
        if(!root) return res;
        res.push_back(root->data);
        if(!root->left && !root->right) return res;
        if(root->left){
            lTraversal(root->left,res);
        }
        leafTraversal(root,res);
        if(root->right){
            stack<int>st;
            rTraversal(root->right,st);
            while(!st.empty()){
            int x=st.top();
            res.push_back(x);
            st.pop();
            }
        }
        return res;
    }
};
