class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* currNode = head;
        while(currNode!=NULL && currNode->next!=NULL)
        {
            while(currNode->next!=NULL && currNode->val==currNode->next->val)
                currNode->next=currNode->next->next;
            currNode=currNode->next;
        }
        return head;
    }
};
