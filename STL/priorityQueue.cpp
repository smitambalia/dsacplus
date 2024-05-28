#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pqueue;

    // maximum heap got the highest priority
    pqueue.push(10);
    pqueue.push(101);
    pqueue.push(40);

    cout << pqueue.top() << endl ;
    return 0;
}

