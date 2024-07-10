// https://leetcode.com/problems/palindrome-linked-list/description/

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
    void reverse(ListNode *&head, ListNode *cur)
    {
        if (cur->next == NULL)
        {
            head = cur;
            return;
        }
        reverse(head, cur->next);
        cur->next->next = cur;
        cur->next = NULL;
    }
    bool check_pallindrom(ListNode *head, ListNode *newhead)
    {
        ListNode *tmp1 = head;
        ListNode *tmp2 = newhead;
        while (tmp1 != NULL)
        {
            if (tmp1->val != tmp2->val)
            {
                return false;
            }
            tmp1 = tmp1->next;
            tmp2 = tmp2->next;
        }
        return true;
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *newhead = NULL;
        ListNode *newtail = NULL;
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            insert_tail(newhead, newtail, tmp->val);
            tmp = tmp->next;
        }
        reverse(newhead, newhead);
        return check_pallindrom(head, newhead);
    }
};