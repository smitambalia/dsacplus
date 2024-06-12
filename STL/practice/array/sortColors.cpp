#include <iostream>
#include <vector>
#include <map>
using namespace std;

void sortColorsWithCountingMethod(vector<int>& nums ) {
    int zeros = 0, ones = 0, twos = 0;
    //  count each colors and store in the map
    for(int item : nums) {
        // cout << item ;
        switch (item)
        {
            case 0 /* constant-expression */:
                /* code */
                zeros++;
                break;
            case 1 /* constant-expression */:
                /* code */
                ones++;
                break;
            case 2 /* constant-expression */:
                /* code */
                twos++;
                break;
            default:
                break;
        }

    }
    int i = 0;
    while (zeros > 0) {
        nums[i] = 0;
        i++;
        zeros--;
    }
    while (ones > 0) {
        nums[i] = 1;
        i++;
        ones--;
    }

    while (twos > 0) {
        nums[i] = 2;
        i++;
        twos--;
    }


    

}

/* 
    Three pointer solution
 */
void sortColorsOptimisedWay(vector<int>& nums) {
    int l=0,m=0 , h = nums.size() - 1;

    while( m <= h ) {

        // if mth location = 1 
        if(nums[m] == 0) {
            swap(nums[m], nums[l]);
            m++;
            l++;
        }
        else if(nums[m] == 1) {
            m++;
        }
        else {
            swap(nums[h],nums[m]);
            h--;
        }
    }

}
int main() {

    /* 
      Array can have only 0,1,2 in the array 
    */

    vector<int> nums = { 1,1,2,0,2,1,0};
    // sortColorsWithCountingMethod(nums);
    sortColorsOptimisedWay(nums);
    for(int item : nums) {
        cout << item << " " ;
    }
    return 0;
}