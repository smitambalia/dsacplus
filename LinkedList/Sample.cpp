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

int findTheMiddleValue(Node *&head) {
    Node* slow = head;
    Node* fast = head;

    while(fast != NULL) {
        fast = fast->next;
        if( fast != NULL) {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow->data;
}


int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(20, head, tail);
    insertAtTail(10, head, tail);
    insertAtTail(30, head, tail);
    insertAtHead(35, head, tail);
    // insertAtTail(40, head, tail);


    // display the nodes

    print(head);
    int middleValue = findTheMiddleValue(head);
    cout << middleValue << " " << endl;
    // insertAtPotion(55, head, tail, 10);
    // print(head);

    return 0;
}
