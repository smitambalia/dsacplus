#include <iostream>
#include <queue>
using namespace std;

int main() {

    deque<int> dque;

    // insertion 
    dque.push_back(10);

    dque.push_back(20);

    dque.push_front(100);

    for(int index : dque) {
        cout << index << " " << endl ;
    }

    cout << dque[0] << endl ;

    dque.insert(dque.begin(),101);

    cout << dque[0] << endl ;

    return 0;
}