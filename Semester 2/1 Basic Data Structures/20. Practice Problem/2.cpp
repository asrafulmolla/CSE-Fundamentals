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
void delete_tail(Node *&head)
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
    Node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
}
void insert_tail(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL) // if linked list NULL //
    {
        head = newNode;
        // tail = newNode;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL)
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

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    while (true)
    {
        int x;
        cin >> x;
        if (x == -1)
            break;
        insert_tail(head, x);
    }
    print(head);
}