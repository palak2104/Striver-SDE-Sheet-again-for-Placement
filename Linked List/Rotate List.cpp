class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || k==0) return head;
        ListNode* x=head;
        int n=0;
        while(x){
            x=x->next;
            n++;
        }
        k=k%n;
        if(k==0) return head;
        ListNode* slow=head;
        ListNode* fast=head;
        for(int i=0;i<k;i++) fast=fast->next;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=head;
        ListNode* temp=slow->next;
        slow->next=NULL;
        return temp;
    }
};
