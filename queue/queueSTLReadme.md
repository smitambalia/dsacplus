## Readme file for the queue 
### Queue follows FIFO data structure 
- First in first out

### Types of queue 

- Normal queue ( queue )
- Circular queue 
- Double-ended queue (dequeue)

### STL function for queue 

- import STL for queue 
#include <queue>

- import STL for double-ended queue 
#include <deque>

### Initialise the Queue with int type
queue<int> queue;
deque<int> dequeue;


### Common STL function for queue

queue.push(10) // to push 10 in to queue 
queue.front() // extract the front element from queue
queue.pop() // popped out the first element from queue
queue.empty() // returns true if empty otherwise false


### Common STL function for  double-end queue (deque)


deque.push_front(10) // to push 10 in front to queue 
deque.push_back(20) // to push 20 in back to queue 
deque.front() // get the front element from queue
deque.back() // get the back element from queue
deque.pop_front() // popped out the first element from queue
deque.pop_back() // popped out the back element from queue
deque.empty() // returns true if empty otherwise false
