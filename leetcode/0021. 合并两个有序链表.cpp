class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head, *temp;
        if(list1==nullptr) return list2;
        else if(list2==nullptr) return list1;
        else{
            if(list1->val<=list2->val){
                head = list1;
                temp = head;
                list1 = list1->next;
            }
            else{
                head = list2;
                temp = head;
                list2 = list2->next;
            }
            while(list1&&list2){
                //cout<<temp->val<<endl;
                if(list1->val<=list2->val){
                    temp->next = list1;
                    list1 = list1->next;
                }
                else{
                    temp->next = list2;
                    list2 = list2->next;
                }
                temp = temp->next;
            }
            if(list1==nullptr) temp->next = list2;
            if(list2==nullptr) temp->next = list1;
        }
        return head;
    }
};
