#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node * Input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if(val==-1)
        root = NULL;
    else
        root = new Node(val);
    queue<Node *> q;
    if(root)
        q.push(root);
    while(!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myleft;
        Node *myright;

        if(l==-1)
            myleft = NULL;
        else
            myleft = new Node(l);

        if(r==-1)
            myright = NULL;
        else
            myright = new Node(r);
        p->left = myleft;
        p->right = myright;

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}
void Level_order(Node *root)
{
    if(root==NULL)
    {
        // cout << "Tree nai";
        return;
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo sob kaj kora
        cout << f->val << " ";

        // 3. children note push kora
        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
}
int main()
{
    Node *root = Input_tree();
    Level_order(root);
}