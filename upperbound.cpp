#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int upperBound(vector<int> &arr, int x, int n)
{
    int low = 0, mid;
    int high = n - 1;
    int ans = n;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] > x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}