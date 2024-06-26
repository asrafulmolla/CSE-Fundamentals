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
void print_result(Node *head)
{
    bool flg = false;
    Node *tmp = head;
    while (tmp != NULL)
    {
        for (Node *temp = tmp->next; temp != NULL; temp = temp->next)
        {
            if ((tmp->val) == (temp->val))
            {
                flg = true;
                break;
            }
        }
        tmp = tmp->next;
    }
    if (flg)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_at_tail(head, val);
    }
    print_result(head);
}