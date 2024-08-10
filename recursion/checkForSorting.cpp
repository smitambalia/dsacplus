#include <iostream>

using namespace std;

bool checkSortingOfArray(int arr[], int size, int index)
{

    // base case
    if (index == size -1)
        return true;

    //  we are solving once and rest are being taken care of by recursion
     if (arr[index + 1] > arr[index])
         return checkSortingOfArray(arr, size, index + 1);
     else
         return false;
}

int main()
{

    int arr[] = {10, 20, 30, 70, 80};
    bool isArraySorted = checkSortingOfArray(arr, 5, 0);

    if (isArraySorted)
        cout << "Array is sorted" << endl;
    else
        cout << "Array is not sorted" << endl;

    return 0;
}