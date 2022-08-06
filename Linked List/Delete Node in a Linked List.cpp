class Solution {
public:
    void deleteNode(ListNode* node) {
       ListNode* nex=node->next;
       swap(node->val,nex->val);
        node->next=node->next->next;
    }
};
