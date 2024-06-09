#include <iostream>
#include <vector>

using namespace std;

/* 
    1> Calculate Sum
    2> Update the ans if it is greater than sum
    3> Reset the Sum if Sum is less than 0
*/
int kandasAlgo(vector<int>& nums) {

    int sum = 0, ans = INT_MIN;
    for(int item : nums) {
        sum = sum + item;
        ans = max(ans,sum);
        sum = (sum < 0) ? 0 : sum ;
    }
    return ans;
}


int main() {

    vector<int> nums = { 4,5,-10,7,8};
    int ans = kandasAlgo(nums);

    cout << "Maximum array of SUM " << ans << endl ;
    return 0;
}