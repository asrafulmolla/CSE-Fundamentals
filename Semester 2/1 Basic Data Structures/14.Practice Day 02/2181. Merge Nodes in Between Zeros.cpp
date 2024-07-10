// https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
class Solution
{
public:
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    ListNode *mergeNodes(ListNode *head)
    {
        ListNode *newhead = NULL;
        ListNode *newtail = NULL;
        ListNode *tmp1 = head->next;
        int sum = 0;
        while (tmp1 != NULL)
        {
            if (tmp1->val != 0)
            {
                sum += tmp1->val;
            }
            else
            {
                insert_tail(newhead, newtail, sum);
                sum = 0;
            }
            tmp1 = tmp1->next;
        }
        return newhead;
    }
};