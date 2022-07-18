class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int>res;
        if(!root) return res;
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int vertical=it.second;
        m[vertical]=node->data;
        if(node->left)
        q.push({node->left,vertical-1});
        if(node->right)
        q.push({node->right,vertical+1});
        }
        for(auto it:m) res.push_back(it.second);
        return res;
    }
};
