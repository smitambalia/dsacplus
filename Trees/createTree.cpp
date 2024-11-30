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

void levelOrderTraversal(Node *root)
{
    // return when root is empty
    if (root == NULL)
    {
        return;
    }
    // initialise the queue with type of Node*
    queue<Node *> q;
    // add root note to queue
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {

        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout << endl;
            if (!q.empty())
                q.push(NULL);
        }
        else
        {
            cout << front->val << " ";

            if (front->left != NULL)
                q.push(root->left);
            if (front->right != NULL)
                q.push(root->right);
        }
    }
}
/**
 * Find depth of a tree
 */
int depthOfATree(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        return 0;

    //    find the depth of a left most tree
    int leftTreeDepth = depthOfATree(temp->left);

    //    find the depth of a right most tree
    int rightTreeDepth = depthOfATree(temp->right);

    int maxDepthOfATree = max(leftTreeDepth, rightTreeDepth) + 1;

    return maxDepthOfATree;
}

int heighOfTree(Node *root)
{

    if (root == NULL)
        return 0;

    int leftHeight = heighOfTree(root->left);

    int rightHeight = heighOfTree(root->right);

    int height = max(leftHeight, rightHeight) + 1;

    return height;
}
int diaMeterOfTree(Node *root)
{
    if (root == NULL)
        return 0;

    int left = heighOfTree(root->left);
    int right = heighOfTree(root->right);
    cout << "left ->" << left << endl;
    cout << "right ->" << right << endl;
    return left + right;
}

bool isTreeBalanced(Node *root)
{

    if (root == NULL)
        return true;

    int left = heighOfTree(root->left);

    int right = heighOfTree(root->right);

    bool absDiff = (abs(left - right) <= 1);

    bool leftTree = isTreeBalanced(root->left);
    bool rightTree = isTreeBalanced(root->right);

    return (leftTree && absDiff * *rightTree);
}

Node *lowestCommonAncestor(Node *root, Node *p, Node *q)
{
    if (root == NULL)
        return NULL;

    if (root->val == p->val)
        return p;
    if (root->val == q->val)
        return q;

    Node *leftAns = lowestCommonAncestor(root->left, p, q);
    Node *rightAns = lowestCommonAncestor(root->right, p, q);

    if (leftAns == NULL && rightAns == NULL)
        return NULL;
    else if (leftAns != NULL && rightAns == NULL)
        return leftAns;
    else if (leftAns == NULL && rightAns != NULL)
        return rightAns;
    else
    {
        return root;
    }
}
bool solvePathSum(TreeNode *root, int targetSum, int sum)
{
    if (root == NULL)
        return false;

    sum = sum + root->val;

    if (root->left == NULL && root->right == NULL)
    {
        if (sum == targetSum)
            return true;
        else
            return false;
    }

    bool leftTree = solvePathSum(root->left, targetSum, sum);
    bool rightTree = solvePathSum(root->right, targetSum, sum);

    return leftTree || rightTree;
}

bool hasPathSum(TreeNode *root, int targetSum)
{

    int sum = 0;
    bool isPathSum = solvePathSum(root, targetSum, sum);
    return isPathSum;
}
/**
 * Path sum 2 problem from LeetCode
 * Problem #113
 */
void solvePathSum(TreeNode *root, int targetSum, int sum, vector<int> &path, vector<vector<int>> &paths)
{
    if (root == NULL)
        return;

    sum = sum + root->val;
    path.push_back(root->val);

    if (root->left == NULL && root->right == NULL)
    {
        if (sum == targetSum)
        {
            paths.push_back(path);
        }
        path.pop_back();
        return;
    }

    solvePathSum(root->left, targetSum, sum, path, paths);
    solvePathSum(root->right, targetSum, sum, path, paths);
    path.pop_back();
}
vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    vector<vector<int>> paths;
    int sum = 0;
    vector<int> path;

    solvePathSum(root, targetSum, sum, path, paths);

    return paths;
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

    if (isTreeBalanced(root))
    {
        cout << "Tree is balanced" << endl;
    }
    else
    {
        cout << "Tree is not balanced" << endl;
    }

    return 0;
}

// 10 50 -1 -1 -1