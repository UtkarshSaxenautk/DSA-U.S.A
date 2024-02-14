#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int search(vector<int> &arr, int n, int k)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;

        if (arr[mid] == k)
        {
            return mid;
        }

        if (arr[s] <= arr[mid])
        {
            if (k >= arr[s] && k <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else
        {
            if (k >= arr[mid] && k <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}
