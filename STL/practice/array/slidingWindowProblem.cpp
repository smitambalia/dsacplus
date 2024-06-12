#include <iostream>
#include <vector>

using namespace std;
/* 
    apply sliding window solution for Maximum Average Subarray
 */
double findSlidingWindow(vector<int> &nums , int &k)
{   
    int i = 0 , j = k -1, sum = 0; 
    for(int y=i ; y <= j ;y++) {
        sum += nums[y];
    }
    int maxSum = sum;
    j++;

    while ( j < nums.size())
    {
        /* code */
        sum -= nums[i];
        sum += nums[j];
        maxSum = max(maxSum,sum);
        j++;
        i++;
    }
    

    
    return ( maxSum / (double)k);

}

int main()
{

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double maxSubArray  = findSlidingWindow(nums,k);

    cout << "Maximux Sub Array Average :" << maxSubArray << endl ;
    return 0;
}