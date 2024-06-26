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
void insert_at_head(Node *&head,int v)
{
    Node *newNode= new Node(v);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted Head"<<endl<<endl;
}
void delete_from_position(Node *head,int pos)
{
    Node *tmp=head;
    for(int i=1;i<=pos-1;i++)
    {
        tmp=tmp->next;
    }
    Node *delete_node=tmp->next;
    tmp->next=tmp->next->next;
    delete delete_node;
    cout<<endl<<"Deleted Position "<<pos<<" Node"<<endl<<endl;

}
void delete_head(Node *&head)
{
    Node *deleteHead = head;
    head=head->next;
    delete deleteHead;
    cout<<endl<<endl<<"Deleted Head"<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        cout << "Option 1: Insert at Tail" << endl;
        cout << "Option 2: Show your Linked List" << endl;
        cout << "Option 3: Insert at postion" << endl;
        cout << "Option 4: Insert at Head" << endl;
        cout << "Option 5: Delete from Position" << endl;
        cout << "Option 6: Delete from Head" << endl;
        cout << "Option 7: Termined" << endl;
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
            if(pos==0)
            {
                insert_at_head(head,value);
            }
            else
            {
                insert_at_position(head,pos,value); 
            }
            
        }
        else if(op==4)
        {
            int value;
            cout<<"Enter inserted value: ";
            cin>>value;
            insert_at_head(head,value);
        }
        else if(op==5)
        {
            int pos;
            cout<<"Enter delete position: ";
            cin>>pos;
            if(pos==0)
            {
                delete_head(head);
            }
            else
            {
                delete_from_position(head,pos);
            }
            
        }
        else if(op==6)
        {
            delete_head(head);
        }
        else if(op==7)
        {
            break;
        }
        
    }
}