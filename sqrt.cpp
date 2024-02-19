#include <bits/stdc++.h>
using namespace std;
int floorSqrt(int n)
{
    int low = 0;
    int high = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int x = mid * mid;
        if (x == n)
        {
            return mid;
        }
        else if (x > n)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return high;
}