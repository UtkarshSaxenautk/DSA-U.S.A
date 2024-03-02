#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(vector<int> a, int i)

{

    int cnt = 1;

    int load = 0;

    for (int j = 0; j < a.size(); j++)

    {

        if ((load + a[j]) > i)

        {

            load = a[j];

            cnt++;
        }

        else

        {

            load += a[j];
        }
    }

    return cnt;
}

int largestSubarraySumMinimized(vector<int> a, int k)
{

    // Write Your Code Here

    int low = *max_element(a.begin(), a.end());

    int high = accumulate(a.begin(), a.end(), 0);

    while (low <= high)

    {

        int mid = low + (high - low) / 2;

        if (func(a, mid) <= k)

        {

            high = mid - 1;
        }

        else

        {

            low = mid + 1;
        }
    }

    return low;
}
