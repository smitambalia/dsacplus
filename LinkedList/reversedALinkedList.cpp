#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtLast(int value, Node *&head)
{
    Node *newNode = new Node(value);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

Node* reverseLinkedList(Node *&prev, Node *&current) {

    // return head when current is null
    if(current == NULL) return prev;

    // initialise the forware pointer  
    Node *forward = current->next;

    current->next = prev;
    prev = current;
    current = forward;
    return reverseLinkedList(prev,current);
}


Node* reverseLinkedList(Node *&head) {
    Node *prev = NULL;
    Node *current = head;

    return reverseLinkedList(prev,current);

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

int main()
{
    Node *head = NULL;
    insertAtLast(10, head);
    insertAtLast(20, head);
    insertAtLast(30, head);
    print(head);

    head = reverseLinkedList(head);
    print(head);

    return 0;
}