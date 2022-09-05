class Solution {
    void func(Node* node,Node* n,unordered_map<Node*,Node*>&vis){
        vis[node]=n;
        for(auto it:node->neighbors){
        if(vis.find(it)==vis.end()){
        Node* x=new Node(it->val);
        n->neighbors.push_back(x);
        func(it,x,vis);
        }
        else{
        n->neighbors.push_back(vis[it]);
        }
        }
    }
public:
    Node* cloneGraph(Node* node) {
    if(!node) return NULL;
    unordered_map<Node*,Node*>vis;
    Node* n=new Node(node->val);
    func(node,n,vis);
    return n;
    }
};
