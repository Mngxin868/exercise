//单链表的结构
struct ListNode
{
    int val;
    ListNode* next;

    // 初始化方法 
    ListNode() : val(0), next(NULL) {}
    ListNode(int x) : val(x), next(NULL) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

//链表逆序
ListNode* Reverse(ListNode* head)
{
    ListNode* temp;
    if (head == NULL || head->next == NULL) return head;
    else {
        temp = Reverse(head->next);   //为head后续的节点逆序
        head->next->next = head;      //逆序后head->next指向的是逆序后的最后一个节点
        head->next = NULL;            //head作为尾节点置空
    }
    return temp;
}
