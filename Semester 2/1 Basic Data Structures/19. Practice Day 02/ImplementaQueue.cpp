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
class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    Queue()
    {
        //     Node *head=NULL;
        // Node *tail=NULL;
        // Implement the Constructor
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }

    void enqueue(int data)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int dequeue()
    {
        // Implement the dequeue() function
        // sz--;
        Node *deleteNode = head;
        head = head->next;
        return deleteNode->val;
        delete deleteNode;
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    int front()
    {
        // Implement the front() function
        return head->val;
    }
};

int main()
{
    Queue q;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.enqueue(x);
    }
    while (!q.isEmpty())
    {
        cout << q.front() << " ";
        int v = q.dequeue();
        cout << q.sz << endl;
    }
}