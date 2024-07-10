// https://leetcode.com/problems/linked-list-cycle/description/
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *fast = head;
        ListNode *slow = head;
        bool flg = false;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (fast == slow)
            {
                flg = true;
                break;
            }
        }
        if (flg)
            return true;
        else
            return false;
    }
};