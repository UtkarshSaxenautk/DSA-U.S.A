#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool searchInARotatedSortedArrayII(vector<int> &a, int key)
{
    int n = a.size();
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (a[mid] == key)
        {
            return true;
        }
        if (a[s] == a[mid] && a[e] == a[mid])
        {
            s = s + 1;
            e = e - 1;
        }
        if (a[s] <= a[mid])
        {
            if (key <= a[mid] && a[s] <= key)
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
            if (key >= a[mid] && a[e] >= key)
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return false;
}
