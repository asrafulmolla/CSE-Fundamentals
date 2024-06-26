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
void insert_at_tail(Node *&head, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
void print_result(Node *head, int sz)
{
    Node *tmp = head;
    int pos = 0;
    if (sz % 2 == 0)
    {
        pos = sz / 2;
        for (int i = 1; i < pos; i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val<<" "<<tmp->next->val;
    }
    else
    {
        pos = (sz / 2) + 1;
        for (int i = 1; i < pos; i++)
        {
            tmp=tmp->next;
        }
        cout<<tmp->val;
    }
}
int main()
{
    int sz = 0;
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        sz++;
        insert_at_tail(head, val);
    }
    print_result(head, sz);
}