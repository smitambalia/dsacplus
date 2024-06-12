#include <iostream>
#include <vector>

using namespace std;

/* 
    - using two pointers array i and j 
    - find the length of the unique array 

 */
int  removeDuplicateArray(vector<int> &duplicateArray) {
    int i = 1 , j = 0;

    cout << "Length :" << duplicateArray.size() << endl ;
    //  loop until i or j reaches the last element of an array
    while ( i < duplicateArray.size()) {
        cout << "ith :" << i << " jth : " << j << endl; 

        // check if ith and jth position are same then increase i only 
        if(duplicateArray[i] == duplicateArray[j]) {
            i++;
        }

        // check if ith and jth position is different then make replace with jth data 

        else if(duplicateArray[i] != duplicateArray[j]) {
            ++j;
            duplicateArray[j] = duplicateArray[i];
            i++;
        }

    }

    return (j+1);
}
int main() {
    vector<int> sortedDuplicateArray = { 0,0,1,2,2,3,4,5,6,7,8};
    int lengthOfUniqueArray = removeDuplicateArray(sortedDuplicateArray);

    cout << "The length of the unique array : " << lengthOfUniqueArray;
    return 0;
}