class Solution {
public:
    Node* copyRandomList(Node* head) {
        Node* temp=head;
        while(temp!=NULL){
        Node* node=new Node(temp->val);
        Node* x=temp->next;
        temp->next=node;
        node->next=x;
        temp=temp->next->next;
        }
        temp=head;
        while(temp!=NULL){
            if(temp->next && temp->random){
                temp->next->random=temp->random->next;
            }
            temp=temp->next->next;
        }
       Node* dummy=new Node(-1);
      Node* k=dummy;
      temp=head;
      while(temp){
          k->next=temp->next;
          k=k->next;
          temp->next=k->next;
          temp=temp->next;
      }
      return dummy->next;
    }
};
