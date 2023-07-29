//快慢指针解决链表是否存在环
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *left = head;
        ListNode *right = head;
        if(head==NULL||head->next==NULL) return false;
        while(left!=NULL&&right!=NULL){
            left = left->next;
            if(right->next==NULL) return false;
            right = right->next->next;
            if(left==right) return true;
        }
        return false;
    }
};
