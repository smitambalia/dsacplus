#include <iostream>
using namespace std;
int binarySearch(int arr[],int target,int s,int e) {

    // base condition
    if(s > e) return -1;

    // processing 
    int mid = s + (e-s) / 2; 

    cout << mid << " " << endl ;

    // when target found return the index
    if(arr[mid] == target) return mid;

    //  search right side when element is bigger then target
    if(arr[mid] > target) {
        return binarySearch(arr,target,s,mid -1);

    }
    //  search left side when element is smaller then target
    else  {
        return binarySearch(arr,target,mid + 1,e );

    } 

}
int main() {

    int arr[] = {10,20,30,40,50,60,70,90};
    int target = 90;
    int size = 8;

    int targetIndex = binarySearch(arr,target,0,size -1);
    if(targetIndex != -1 ) 
        cout << "Target is at :" << targetIndex << endl ;
    else 
        cout << "Target is not found" << endl; 
    return 0;
}