/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* getKthFromEnd(ListNode* head, int k) {
        ListNode* temp=head;
        int num=0;
        while(temp!=NULL){
            temp=temp->next;
            num++;
        }
        temp=head;
        for(int i=0;i<num-k;i++){
            temp=temp->next;
        }
        return temp;
    }
};
