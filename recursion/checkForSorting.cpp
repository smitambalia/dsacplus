#include <iostream>

using namespace std;

bool checkSortingOfArray(int arr[], int size, int index)
{

    // base case
    if (index >= size)
        return true;

    if (arr[index] > arr[index - 1])
        return checkSortingOfArray(arr, size, index + 1);
    else
        return false;
}

int main()
{

    int arr[] = {10, 20, 30, 60, 50};
    bool isArraySorted = checkSortingOfArray(arr, 5, 1);
    if (isArraySorted)
        cout << "Array is Sorted"  << endl;
    else
        cout << "Array is not Sorted"  << endl;

    return 0;
}