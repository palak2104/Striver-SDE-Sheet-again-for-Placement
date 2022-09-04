class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
    if(!head) return NULL;
    ListNode* dummy=new ListNode(0);
    dummy->next=head;
    ListNode* slow=dummy;
    ListNode* fast=dummy;
    ListNode* temp;
    while(fast && fast->next){
        temp=slow;
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* x=slow->next;
    temp->next=NULL;
    TreeNode* node=new TreeNode(slow->val);
    if(slow!=head)
    node->left=sortedListToBST(head);
    node->right=sortedListToBST(x);
    return node;
    }
};
