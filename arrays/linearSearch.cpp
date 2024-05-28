#include <iostream>
using namespace std;

bool searchTargetFromArray(int arr[], int size, int target){

    for (int index =0; index < size ; index++) {
        if( arr[index] == target) return true;
    }
    return false;
}
int main () {

    int searchArray[5] = {20,3,10,5,6};
    int target = 6;

    bool isTargetFound = searchTargetFromArray(searchArray, 5 , 6);

    if(isTargetFound) cout << " Target is found : " <<  6 << endl;
    else cout << "Target is not found" << endl ;
    return 0;
}