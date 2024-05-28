#include <iostream>
using namespace std;

void addTheOffset(int baseArray[], int sizeOfArray) {

    for(int i=0; i < sizeOfArray ; i++) {
        baseArray[i] += 120;
    }
    return;
}

int main() {

    int arr[5] = { 12,32,5,6,10};

    addTheOffset(arr,5);

    for(int index =0; index < 5; index++) {
        cout << arr[index] << endl;
    }

    return 0;
}