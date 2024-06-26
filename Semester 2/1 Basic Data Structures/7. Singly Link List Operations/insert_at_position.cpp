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
        cout<<endl<<endl<<"Insertd at Head"<<endl<<endl;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    // tmp ekhn last node e
    tmp->next = newNode;
    cout<<endl<<endl<<"Insertd at Tail"<<endl<<endl;
}
void print_linked_list(Node *head)
{
    cout<<"Your Linked List: ";
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout<<endl<<endl;
}
void insert_at_position(Node *head, int pos,int v)
{
    Node *newNode=new Node(v);
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
    cout<<endl<<endl<<"Inserted at position "<<pos<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Show your Linked List" << endl;
        cout << "Option 3: Insert postion" << endl;
        cout << "Option 4: Termined" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout<<"Please enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if(op==2)
        {
            print_linked_list(head);
        }
        else if(op==3)
        {
            int pos;
            cout<<"Enter inserted position: ";
            cin>>pos;
            int value;
            cout<<"Enter inserted value: ";
            cin>>value;
            insert_at_position(head,pos,value);
        }
        else if(op==4)
        {
            break;
        }
        
    }
}