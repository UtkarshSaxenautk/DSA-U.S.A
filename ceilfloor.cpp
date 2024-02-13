#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
pair<int, int> getFloorAndCeil(vector<int> &arr, int n, int x)
{
    pair<int, int> p;
    int low = 0;
    int high = n - 1;

    int left = -1;
    int right = -1;
    while (low <= high)
    {
        int mid = (high + low) / 2;
        if (arr[mid] == x)
        {
            right = arr[mid];
            left = arr[mid];
            break;
        }
        else if (arr[mid] > x)
        {
            right = arr[mid];
            high = mid - 1;
        }
        else
        {
            left = arr[mid];
            low = mid + 1;
        }
    }
    p.first = left;
    p.second = right;
    return p;
}