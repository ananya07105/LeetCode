class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(!head->next || m==n) return head;
        ListNode* l = head;
        for(int i=0;i<m-2;i++)
            l=l->next;
        ListNode* pre = NULL;
        ListNode* cur = m==1?l:l->next;
        ListNode* next = cur->next;
        ListNode* reverseHead = cur;
        for(int i=0;i<n-m+1;i++)
        {
            cur->next = pre;
            pre=cur;
            cur=next;
            next = next ? next->next : NULL;
            
        }
        reverseHead->next = cur;
        if(m!=1) l->next = pre;
        return m==1 ?pre:head;
        
    }
};
