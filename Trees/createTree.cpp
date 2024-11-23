#include <iostream>
#include <queue>
#include <cstdlib>

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

Node *createTree()
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

void inOrderTraversal(Node *root)
{
    // Current , Left , Right
    // check if node is empty
    if (root == NULL)
        return;

    // printing all the nodes which comes left side of the tree
    inOrderTraversal(root->left);

    cout << root->val << " ";

    // printing all the nodes which comes right side of the tree
    inOrderTraversal(root->right);
}

//  preorder traversal
void preOrderTraveral(Node *root)
{

    if (root == NULL)
        return;

    cout << root->val;

    preOrderTraveral(root->left);

    preOrderTraveral(root->right);
}

// postorder traversal
void postOrderTraversal(Node *root)
{

    if (root == NULL)
        return;

    postOrderTraversal(root->right);
    postOrderTraversal(root->left);
    cout << root->val;
}

void levelOrderTraversal(Node* root) {
    // return when root is empty
    if(root == NULL) {
        return;
    }
    // initialise the queue with type of Node*
    queue<Node*> q;
    // add root note to queue
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {

        Node* front = q.front();
        q.pop();
        
        if(front == NULL) {
            cout << endl ;
            if(!q.empty()) q.push(NULL);
        }
        else {
            cout << front->val << " ";

            if(front->left !=NULL) q.push(root->left);
            if(front->right != NULL) q.push(root->right);
        }
        

    }

}
/**
 * Find depth of a tree
 */
int depthOfATree(Node *head) {
    Node* temp = head;
    if(temp == NULL) return 0;
   
    //    find the depth of a left most tree
    int leftTreeDepth = depthOfATree(temp->left);

    //    find the depth of a right most tree
    int rightTreeDepth = depthOfATree(temp->right);

    int maxDepthOfATree = max(leftTreeDepth,rightTreeDepth) + 1;

    return maxDepthOfATree;

}

int heighOfTree(Node* root) {

    if(root == NULL) return 0;

    int leftHeight = heighOfTree(root->left);

    int rightHeight = heighOfTree(root->right);

    int height = max(leftHeight,rightHeight) + 1;

    return height;
}
int diaMeterOfTree(Node* root) {
    if(root == NULL) return 0;

    int left = heighOfTree(root->left);
    int right = heighOfTree(root->right);
    cout << "left ->" << left << endl;
    cout << "right ->" << right << endl;
    return left + right;

}

bool isTreeBalanced(Node* root) {

    if(root == NULL) return true;

    int left = heighOfTree(root->left);

    int right = heighOfTree(root->right);

    bool absDiff = (abs(left-right) <= 1);

    bool leftTree = isTreeBalanced(root->left);
    bool rightTree = isTreeBalanced(root->right);

    return (leftTree && absDiff ** rightTree);
}

int main()
{
    Node *root;

    root = createTree();

    // cout << "root -> " << root->val;

    // inOrderTraversal(root);
    // levelOrderTraversal(root);
    // cout << depthOfATree(root) << endl ;
    // cout << diaMeterOfTree(root) << endl ;

    if(isTreeBalanced(root)) {
        cout << "Tree is balanced" << endl ;
    }
    else {
        cout << "Tree is not balanced" << endl ;
    }

    return 0;
}

// 10 50 -1 -1 -1