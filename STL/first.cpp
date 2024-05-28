#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> marks;
    marks.reserve(10);
    cout << "Size: " << marks.capacity() << endl;

    cout << "Max Size : " << marks.max_size() << endl;

    marks[0] = 200;
    cout << "Marks at 0th index " << marks[0] << endl;
    marks.clear();
    cout << "Capacity " << marks.capacity() << endl;
    if (marks.empty() == true)
    {
        cout << "Vector is empty" << endl;
    }
    else
    {
        cout << "Vector is not empty" << endl;
    }
    marks.insert(marks.begin(), 200);
    cout << marks[0] << endl;

    cout << "Size " << marks.size() << endl;

    marks.erase(marks.begin() , marks.end());

    cout << "Size " << marks.size() << endl;

    vector<int> first ;
    vector<int> secound;

    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    secound.push_back(100);
    secound.push_back(200);
    secound.push_back(300);
    secound.push_back(400);

    first.swap(secound);

    /* cout << first[0] << " " << secound[0] << endl ;
    cout << first[first.size() -1] << " " << secound[secound.size() -1] << endl ;

    for(int index : first) {
        cout << index << endl ;
    }
    for(int index : secound) {
        cout << index << endl;
    } */

    //  create a iterator
    vector<int>::iterator it = first.begin();

    while ( it != first.end()) {
        cout << *it << endl;
        it++;
    } 

    //  create 2d array with 5 rows and 4 columns , and init with 0
    vector<vector<int> > arr(5, vector<int>(4,0));

    
    // number of rows 

    int totalRows = arr.size();

    // number of columns 
    int totalCols = arr[0].size();

    cout << "Total rows :" << totalRows << " Total Columns " << totalCols << endl;
    
    return 0;
}