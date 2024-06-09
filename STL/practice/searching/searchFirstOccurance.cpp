#include<iostream>
#include<vector>

using namespace std;
void searchFirstOccurance(vector<int>& array, int target, int &ansIndex) {
    int s = 0;
    int e = array.size() -1 ;
    int mid = s + (e -s ) /2; 

    while (s <=e) {

        // if target is found in index , then store and compute next possible occurence on left side of the array
        if(array[mid] == target)  {
            ansIndex = mid ;
            e = mid -1 ;
        }

        if(array[mid] > target) e = mid -1 ;

        if(array[mid] < target) s = mid + 1;

        mid = s + ( e -s ) / 2 ;

    }
}


int main() {

    vector<int> array = {20,20,20,30,40,50,60};
    int target = 20;
    int ansIndex = -1;
    searchFirstOccurance(array, target,ansIndex);

    cout << "First Occurance " << ansIndex << endl;
    return 0;
}