#include <iostream>
#include <list>
using namespace std;

int main()
{

    // creation of link list
    
    list<int> list1;

    list1.push_back(11);
    list1.push_back(12);
    list1.push_back(13);
    list1.push_back(14);

    cout << list1.size() << endl;
    cout << list1.empty() << endl;

    for (int index : list1)
    {
        cout << index << endl;
    }
    return 0;
}