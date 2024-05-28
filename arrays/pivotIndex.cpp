#include <iostream>
#include <array>
using namespace std;

int findPivotalByBruteForce(int nums[], int size)
{

    // iterate over all the elements
    // calculate sum of left elements from the current index
    // calculate sum of right elements from the current index
    // and check if left and right sum matches , return the current index

    for (int i = 1; i < size; i++)
    {
        int lsum = 0, rsum = 0;

        //  calculate left sum
        for (int j = i - 1; j >= 0; j--)
        {
            lsum += nums[j];
        }

        // calculate right sim
        for (int j = i + 1; j < size; j++)
        {
            rsum += nums[j];
        }

        cout << "Left Sum : " << lsum << " Right Sum : " << rsum << endl;

        if (lsum == rsum)
            return i;
    }

    return -1;
}

int main()
{

    int nums[6] = {1, 7, 3, 6, 5, 6};

    int pivotIndex = findPivotalByBruteForce(nums, 6);

    cout << "Pivot Index would be " << pivotIndex << endl;

    return 0;
}