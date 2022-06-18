class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while((head!=nullptr) && (head->val==val))
            head=head->next;
        ListNode* temp=head;
        while(temp!=nullptr){
            ListNode* next=temp->next;
            while((next!=nullptr) && (next->val==val)){
                temp->next=next->next;
                next=next->next;
            }
            temp=temp->next;
            
        }
        return head;
    }
};
