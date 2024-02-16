#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findMin(vector<int> &arr)
{
    int n = arr.size();
    int s = 0, e = n - 1;
    int mid;
    while (s < e)
    {
        mid = s + (e - s) / 2;
        if (arr[mid] > arr[e])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return arr[e];
}
