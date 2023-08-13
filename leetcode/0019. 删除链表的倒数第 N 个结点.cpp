//前后双指针
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *ans = head, *front = head, *back = head;
        if(head==nullptr||head->next==nullptr) return nullptr;
        int i = 0;
        while(back->next!=nullptr){
            back = back->next;
            i++;
            if(i>n) front = front->next; 
        }
        if(i<n) ans = ans->next;
        front->next = front->next->next;
        return ans;
    }
};
