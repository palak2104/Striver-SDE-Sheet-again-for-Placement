class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2) return NULL;
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode* i=list1;
        while(i!=NULL){
        ListNode* j=list2;
        if(i->val>j->val){
            swap(i->val,j->val);
            ListNode* k=j->next;
            while(k!=NULL && k->val<j->val){
                swap(j->val,k->val);
                j=k;
                k=k->next;
            }
        }
        i=i->next;
        }
        i=list1;
        while(i->next!=NULL) i=i->next;
        i->next=list2;
        return list1;
    }
};
