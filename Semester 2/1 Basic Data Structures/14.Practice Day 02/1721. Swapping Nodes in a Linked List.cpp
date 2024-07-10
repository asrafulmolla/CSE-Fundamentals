// https://leetcode.com/problems/swapping-nodes-in-a-linked-list/description/
class Solution
{
public:
    int size(ListNode *head)
    {
        int cnt = 0;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    ListNode *swapNodes(ListNode *head, int k)
    {
        if (head == NULL)
        {
            return head;
        }
        ListNode *tmp1 = head;
        for (int i = 1; i <= k - 1; i++)
        {
            tmp1 = tmp1->next;
        }
        ListNode *tmp2 = head;
        int pos = size(head) - k;
        for (int i = 1; i <= pos; i++)
        {
            tmp2 = tmp2->next;
        }
        swap(tmp1->val, tmp2->val);
        return head;
    }
};