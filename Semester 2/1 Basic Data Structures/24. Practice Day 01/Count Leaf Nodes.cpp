/**********************************************************

    Following is the Binary Tree Node class structure:

    template <typename T>
    class BinaryTreeNode {
      public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
                this -> data = data;
                left = NULL;
                right = NULL;
        }
    };
    
***********************************************************/
int Count_Leaf_Nodes(BinaryTreeNode<int> *root) {
    // base case
    if (root == NULL) {
        return 0;
    }
    // If node is a leaf node
    if (root->left == NULL && root->right == NULL) {
        return 1;
    }
    // Recursive count of leaf nodes in left and right subtrees
    int l = Count_Leaf_Nodes(root->left);
    int r = Count_Leaf_Nodes(root->right);
    return l + r; // Return sum of leaf nodes in left and right subtrees
}

// Wrapper function to count leaf nodes
int noOfLeafNodes(BinaryTreeNode<int> *root) {
    return Count_Leaf_Nodes(root);
}