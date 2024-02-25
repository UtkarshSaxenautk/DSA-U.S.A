#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int missingK(vector<int> nums, int n, int k)
{

    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int missing = nums[mid] - (mid + 1);

        if (missing < k)
            low = mid + 1;
        else
            high = mid - 1;
    }

    int missing = nums[high] - (high + 1);

    int needed = nums[high] + (k - missing);

    return needed;
}