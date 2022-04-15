class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node;
        temp->val=temp->next->val;
        temp->next=node->next;
        temp->next=temp->next->next;
        
    }
};
