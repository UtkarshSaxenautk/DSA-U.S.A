#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int singleNonDuplicate(vector<int> &a)

{

    // Write your code here

    int l = 0, h = a.size() - 1, res = 0;

    while (l <= h)
    {

        int mid = (l + h) / 2;

        if (mid % 2 && a[mid - 1] != a[mid])
        {

            h = mid - 1;
        }

        else if (mid % 2 && a[mid - 1] == a[mid])
            l = mid + 1;

        else if (mid % 2 == 0 && a[mid] != a[mid + 1])
        {

            h = mid - 1;

            res = mid;
        }

        else
            l = mid + 1;
    }

    return a[res];
}