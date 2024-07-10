// https://leetcode.com/problems/remove-nth-node-from-end-of-list/
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
    void delete_head(ListNode *&head)
    {
        if (head == NULL)
        {
            return;
        }
        head = head->next;
    }
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL)
        {
            return head;
        }
        int pos = size(head) - n;
        if (pos < 0 || size(head) <= pos)
        {
            return head;
        }
        if (pos == 0)
        {
            delete_head(head);
            return head;
        }
        ListNode *tmp = head;
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
        }
        if (tmp->next != NULL)
        {
            tmp->next = tmp->next->next;
        }
        return head;
    }
};