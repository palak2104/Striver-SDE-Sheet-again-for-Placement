class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL;
        ListNode* curr=head;
        ListNode* nex=NULL;
        while(curr){
        nex=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nex;
        }
        return prev;
    }
};
