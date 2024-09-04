#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;

public:
    Node(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }

};

Node * createTree()
{
    cout << "Enter a value for tree" << endl;
    int value;
    cin >> value;

    //  if value is -1 the return from the function

    if (value == -1)
    {
        return NULL;
    }

    //  create a new node
    Node *node = new Node(value);

    cout << "Adding a left sub-tree" << endl;
    //  create a left sub-tree
    node->left = createTree();
    cout << "Adding a right sub-tree" << endl;

    //  create a right sub-tree
    node->right = createTree();

    return node;
}

void inOrderTraversal(Node* root) {
    // Current , Left , Right
    // check if node is empty
    if(root == NULL) return;

    // printing all the nodes which comes left side of the tree 
    inOrderTraversal(root->left);

    cout << root->val << " ";

    // printing all the nodes which comes right side of the tree 
    inOrderTraversal(root->right);

}

//  preorder traversal 
void preOrderTraveral(Node* root) {

    if(root == NULL) return;

    cout << root->val;

    preOrderTraveral(root->left);

    preOrderTraveral(root->right);
}

// postorder traversal 
void portOrderTraversal(Node* root) {

    if(root == NULL) return;

    postOrderTraversal(root->right);
    postOrderTraversal(root->left);
    cout << root->val;

}


int main()
{
    Node *root;

    root = createTree();

    // cout << "root -> " << root->val;

    inOrderTraversal(root);
    return 0;
}

// 10 50 -1 -1 -1