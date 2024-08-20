#include <bits/stdc++.h>
/*
    Tree Node class.

    class BinaryTreeNode
    {
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    }
*/

long long leftSum(BinaryTreeNode<int> *root)
{
    long long sum = 0;
    if (root == NULL)
        return sum;

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        if (f->left != NULL)
        {
            sum += f->left->data;
        }

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return sum;
}