class Solution {
    ListNode* nhead=NULL;
    ListNode* func(ListNode* curr){
        if(curr==NULL) return curr;
        if(curr->next==NULL){
            nhead=curr;
            return curr;
        }
        ListNode* nex=func(curr->next);
        nex->next=curr;
        curr->next=NULL;
        return curr;
    }
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=func(head);
        return nhead;
    }
};
