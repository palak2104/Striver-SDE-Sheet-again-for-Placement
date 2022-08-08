Node* merge(Node* l1,Node* l2){
    Node* i=l1;
    if(!l1) return l2;
    if(!l2) return l1;
    while(i!=NULL){
        Node* j=l2;
        if(i->data>j->data){
            swap(i->data,j->data);
            Node* k=j->bottom;
            while(k!=NULL && k->data<j->data){
                swap(k->data,j->data);
                j=k;
                k=k->bottom;
            }
        }
        i=i->bottom;
    }
    i=l1;
    while(i->bottom!=NULL) i=i->bottom;
    i->bottom=l2;
    return l1;
}
Node *flatten(Node *root)
{
   // Your code here
   if(!root || !root->next) return root;
  root->next = flatten(root->next); 
  
  root = merge(root, root->next); 
  
   return root; 
}

