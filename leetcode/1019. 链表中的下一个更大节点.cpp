/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        int nownum;
        ListNode* temp;
        while(head!=NULL){
            nownum = head->val;
            temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
                if(nownum<temp->val){
                    ans.push_back(temp->val);
                    break;
                }
                if(temp->next==NULL)
                    ans.push_back(0);
            }
            if(head->next == NULL){
                ans.push_back(0);
                break;
            }
            else head = head->next;
        }
        return ans;
    }
};

//暴力解法，不过应该有更高效的解法
