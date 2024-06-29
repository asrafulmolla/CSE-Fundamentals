#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}
void print_result(Node *head)
{
    Node *tmp = head;
    int pos = 0;
    if (size(head) % 2 == 0)
    {
        pos = size(head) / 2;
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << " " << tmp->next->val;
    }
    else
    {
        pos = (size(head) / 2) + 1;
        for (int i = 1; i < pos; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_result(head);
}