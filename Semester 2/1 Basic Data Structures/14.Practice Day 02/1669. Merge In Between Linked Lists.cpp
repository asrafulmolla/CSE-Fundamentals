// https://leetcode.com/problems/merge-in-between-linked-lists/description/
class Solution
{
public:
    ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
    {
        ListNode *tmp1 = list1;

        for (int i = 1; i <= a - 1; i++)
        {
            tmp1 = tmp1->next;
        }
        ListNode *tmp2 = tmp1->next;
        for (int i = a; i <= b; i++)
        {
            tmp2 = tmp2->next;
        }
        tmp1->next = list2;
        ListNode *list = list2;
        while (list->next != NULL)
        {
            ListNode *last = list;
            list = list->next;
        }
        list->next = tmp2;
        return list1;
    }
};