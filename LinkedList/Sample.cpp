#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

void insertAtTail(int value, Node *&head, Node *&tail)
{
    Node *newNode = new Node(value);
    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    tail->next = newNode;
    tail = newNode;
}
void insertAtHead(int value, Node *&head, Node *&tail)
{
    Node *newNode = new Node(value);

    if (head == NULL && tail == NULL)
    {
        head = newNode;
        tail = newNode;
    }

    newNode->next = head;
    head = newNode;
}
int findLengthOfLL(Node *&head)
{

    Node *temp = head;
    int len;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
        /* code */
    }

    return len;
}

void insertAtPotion(int value, Node *&head, Node *&tail, int position)
{
    int length = findLengthOfLL(head);

    if (position == 1)
    {
        insertAtHead(value, head, tail);
    }
    if (position > length)
    {
        insertAtTail(value, head, tail);
    }

    Node *temp = head;
    for (int i = 1; i <= position - 2; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(value);

    newNode->next = temp->next;
    temp->next = newNode;
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool search(int target, Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        /* code */
        if (temp->data == target)
            return true;

        temp = temp->next;
    }

    return false;
}   

Node* reverseLinkedListWithoutRecursion(Node *&head) {

    Node *prev = NULL;
    Node *current = head;

    // repeate the process until
    while(current != NULL) {
        Node *forward = current->next;
        current->next = prev;
        prev = current;
        current = forward;
    }

    return prev;

}

 

/**
 * find the middle node with fast and slow Node pointer
 * slow pointer increases one node at a time
 * fast pointer node increases two times at a time
 */
Node* findTheMiddleValue(Node *&head) {
    Node* slow = head;
    Node* fast = head;
    Node* beforeSlow = NULL;

    while(fast != NULL) {
        fast = fast->next;
        if(fast != NULL) {
            fast = fast->next;
            beforeSlow = slow;
            slow = slow->next;
        }
    }
    return beforeSlow;
}


/**
 * 40 35 20 10 30 
 * middle node 20 
 * make two linked-list
 * reverse the 2nd one 
 * returns true if both linked lists matches
 */
bool isPalindrom(Node* &head) {
    // palindrom when there is no node 
    if(head == NULL) return true;
    // palindrom when there only one node
    if(head->next == NULL) return true;

    print(head);
    Node* middleNode = findTheMiddleValue(head);
    cout << middleNode->data << " " << endl;

    // create a secound linked list 
    Node* headForSecoundNode = middleNode->next;

    // make first linked list by ponting last node of next to NULL
    middleNode->next = NULL;

    //  reverse the secound linked list
    headForSecoundNode = reverseLinkedListWithoutRecursion(headForSecoundNode);
    print(headForSecoundNode);
    print(head);

    Node* headForFirstNode = head;

    while (headForFirstNode != NULL && headForSecoundNode !=NULL) {

        if(headForFirstNode->data != headForSecoundNode->data) {
            return false;
        }
        else {
            headForFirstNode = headForFirstNode->next;
            headForSecoundNode= headForSecoundNode->next;
        }
    }
    return true;
   
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(1, head, tail);
    insertAtTail(2, head, tail);
    insertAtTail(3, head, tail);
    insertAtTail(2, head, tail);
    insertAtTail(1, head, tail);


    bool linkeListIsPalindrom = isPalindrom(head);
    if(linkeListIsPalindrom) {
        cout << "LinkedList is palindrom!!" << endl ;
    }
    else {
        cout << "LinkedList is not palindrom!!" << endl ;

    }
    
    // find the palindrom 
    return 0;
}
