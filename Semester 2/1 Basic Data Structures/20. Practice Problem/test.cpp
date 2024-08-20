#include <bits/stdc++.h>
using namespace std;
class ListNode
{
    public:
    int val;
    ListNode* next;
    ListNode(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
class Solution
{
public:
    void delete_tail(ListNode *&head)
    {
        if (head == nullptr)
        { // If list is empty
            return;
        }
        if (head->next == nullptr)
        { // If list has only one node
            delete head;
            head = nullptr;
            return;
        }
        ListNode *temp = head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
    }
    void insert_tail(ListNode *&head, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL) // if linked list NULL //
        {
            head = newNode;
            // tail = newNode;
            return;
        }
        ListNode *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        if (temp->val == newNode->val)
        {
            delete_tail(head);
        }
        else if (temp->val != newNode->val)
        {
            temp->next = newNode;
        }
    }
    ListNode *deleteDuplicates(ListNode *head)
    {

        ListNode *newhead = NULL;
        ListNode *temp = head;
        while (temp != NULL)
        {
            insert_tail(newhead, temp->val);
            temp = temp->next;
        }
        return newhead;
    }
};
void print(ListNode *head)
{
    ListNode *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Solution s;
    ListNode *head = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        s.insert_tail(head, x);
    }
    print(head);
}