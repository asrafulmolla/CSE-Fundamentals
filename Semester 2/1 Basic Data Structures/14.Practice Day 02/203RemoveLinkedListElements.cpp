// https://leetcode.com/problems/remove-linked-list-elements/description/
class Solution
{
public:
    void headcheck(ListNode *&head, int val)
    {
        while (head != NULL && head->val == val)
        {
            head = head->next;
        }
    }

    ListNode *removeElements(ListNode *head, int val)
    {
        if (head == NULL)
        {
            return head;
        }
        headcheck(head, val);
        ListNode *tmp = head;
        while (tmp != NULL && tmp->next != NULL)
        {
            if (tmp->next->val == val)
            {
                tmp->next = tmp->next->next;
            }
            else
            {
                tmp = tmp->next;
            }
        }

        return head;
    }
};
