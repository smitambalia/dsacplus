#include <iostream>
#include <map>
#include <vector>
using namespace std;
int findSingleNumber(vector<int> nums)
{
    map<int, int> frequencyOfNumbers;
    //  make map which stores the key from list and frequency of occurance as value 
    for(int i =0; i < nums.size();i++) {
        frequencyOfNumbers[nums[i]] = 
            (frequencyOfNumbers.find(nums[i]) != frequencyOfNumbers.end())
             ? frequencyOfNumbers[nums[i]] + 1  : 1;
    }

    for(pair<int,int> map : frequencyOfNumbers) {
        if(map.second ==1) return map.first;
    } 
}

int main()
{

    // init the list of numbers
    vector<int> nums = { 4,4,4,1,2,2,2};

    int singleNumber = findSingleNumber(nums);
    cout << "Found the single number " << singleNumber << endl ;
    return 0;
}