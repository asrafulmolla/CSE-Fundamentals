#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
void Level_order(Node * root)
{
    queue<Node *> q;
    q.push(root);
    while(!q.empty())
    {
        // 1. ber kore ana
        Node *f = q.front();
        q.pop();

        // 2. jabotiyo sob kaj kora
        cout << f->val << " ";

        // 3. children note push kora
        if(f->left)
            q.push(f->left);
        if(f->right)
            q.push(f->right);
    }
}
Node * Convert(int a[],int n,int l,int r)
{
    if(l>r)
        return NULL;
    int mid = (l + r) / 2;
    Node *root = new Node(a[mid]);
    Node *LeftRoot = Convert(a, n, l, mid - 1);
    Node *RightRoot = Convert(a, n, mid + 1, r);
    root->left = LeftRoot;
    root->right = RightRoot;
    return root;
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n;i++)
        cin >> a[i];
    Node *root=Convert(a, n, 0, n - 1);
    Level_order(root);
}