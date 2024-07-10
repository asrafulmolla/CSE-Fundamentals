// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/description/
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
    int getDecimalValue(ListNode *head)
    {
        int sz = size(head);
        int s = pow(2, sz - 1);
        ListNode *tmp = head;
        int result = 0;
        for (int i = s; i != 0; i /= 2)
        {
            if (tmp->val == 1)
            {
                result += i;
            }
            tmp = tmp->next;
        }
        return result;
    }
};