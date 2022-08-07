class Solution {
    void reverse(ListNode* s,ListNode* e){
        ListNode* prev=NULL;
        ListNode* curr=s;
        ListNode* nex=NULL;
        while(prev!=e){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
    }
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head || !head->next || k==1) return head;
        ListNode* s=head;
        ListNode* e=head;
        int i=k-1;
        while(i--){
            e=e->next;
            if(e==NULL) return head;
        }
        ListNode* node=reverseKGroup(e->next,k);
        reverse(s,e);
        s->next=node;
        return e;
    }
};
