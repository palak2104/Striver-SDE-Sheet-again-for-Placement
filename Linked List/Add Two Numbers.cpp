class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* i=l1;
        ListNode* j=l2;
        ListNode* dummy=new ListNode(-1);
        ListNode* k=dummy;
        int carry=0;
        while(i!=NULL && j!=NULL){
            int data=i->val+j->val+carry;
            ListNode* node=new ListNode(data%10);
            carry=data/10;
            k->next=node;
            k=k->next;
            i=i->next;
            j=j->next;
        }
        while(i!=NULL){
           int data=i->val+carry;
            ListNode* node=new ListNode(data%10);
            carry=data/10;
            k->next=node;
            k=k->next;
            i=i->next; 
        }
        while(j!=NULL){
            int data=j->val+carry;
            ListNode* node=new ListNode(data%10);
            carry=data/10;
            k->next=node;
            k=k->next;
            j=j->next;
        }
        while(carry!=0){
            ListNode* node=new ListNode(carry%10);
            carry=carry/10;
            k->next=node;
            k=k->next;
        }
        return dummy->next;
    }
};
