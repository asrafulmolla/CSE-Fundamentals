// https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/

class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *tmp = head;
        ListNode *i = tmp;
        while (i != NULL && i->next != NULL)
        {
            ListNode *j = i;
            while (j->next != NULL)
            {
                if (i->val == j->next->val)
                {
                    ListNode *delete_node = j->next;
                    j->next = j->next->next;
                    delete delete_node;
                }
                else
                {
                    j = j->next;
                }
            }
            i = i->next;
        }
        return head;
    }
};