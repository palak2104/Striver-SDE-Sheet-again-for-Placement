class Solution {
    ListNode* reverse(ListNode* slow){
        ListNode* prev=NULL;
        ListNode* curr=slow;
        ListNode* nex=NULL;
        while(slow!=NULL){
            nex=slow->next;
            slow->next=prev;
            prev=slow;
            slow=nex;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return head;
       ListNode* slow=head;
       ListNode* fast=head;
       ListNode* prev;
        while(fast && fast->next){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next=reverse(slow);
        slow=prev->next;
        ListNode* start=head;
        while(slow!=NULL){
            if(head->val!=slow->val) return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
    }
};
