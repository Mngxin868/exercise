class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode* temp = head, *temp1;
        if(head==nullptr||head->next==nullptr||temp->next->next==nullptr)
            return;
        while(temp->next->next!=nullptr) temp = temp->next;
        temp1 = temp->next;
        temp->next = nullptr;
        temp1->next = head->next;
        head->next = temp1;
        reorderList(temp1->next);
    }
};
