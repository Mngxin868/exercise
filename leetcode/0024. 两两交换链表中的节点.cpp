//非递归解法
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode *temp, *ans;
        if(head==nullptr||head->next==nullptr) return head;
        ans = head->next;
        temp = head->next;
        head->next = temp->next;
        temp->next = head;
        while(head->next!=nullptr&&head->next->next!=nullptr){
            temp = head->next;
            head->next = temp->next;
            temp->next = temp->next->next;
            head->next->next = temp;
            head = head->next->next;
        }
        return ans;
    }
};
