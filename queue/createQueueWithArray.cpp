#include <iostream>
using namespace std;
// Creating a new Queue class
class Queue
{
private:
    int size;
    int *arr;
    int front;
    int rear;

public:
    Queue(int size)
    {
        this->size = size;
        arr = new int[this->size];
        front = -1;
        rear = -1;
    }

    /**
     * checking overflow queue
     * checking if queue is empty 
     * 
     */
    void push(int value)
    {
    }

    int pop()
    {
    }

    int getSize()
    {
    }

    int getFront()
    {
    }
    int getRear()
    {
    }
    /*
        returns true if not data otherwise false
     */
    bool isEmpty()
    {

        return (front == -1 && rear == -1) ? true : false;
    }

    int getSize()
    {
    }

} 
int main()
{

    Queue q(5);
}