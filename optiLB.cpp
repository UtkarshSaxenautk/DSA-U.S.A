#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lowerBound(vector<int> arr, int n, int x)
{
    int low = 0, mid;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        mid = high + (low - high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}