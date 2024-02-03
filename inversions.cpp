#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int merge(vector<int> &a, int low, int mid, int high)

{
    vector<int> v;

    int count = 0;

    int left = low;

    int right = mid + 1;

    while (left <= mid && right <= high)

    {

        if (a[left] <= a[right])

        {

            v.push_back(a[left]);

            left++;
        }

        else
        {

            v.push_back(a[right]);

            count += mid - left + 1;

            right++;
        }
    }

    while (left <= mid)

    {

        v.push_back(a[left]);

        left++;
    }

    while (right <= high)

    {

        v.push_back(a[right]);

        right++;
    }

    for (int i = low; i <= high; i++)

    {

        a[i] = v[i - low];
    }

    return count;
}

int mergesort(vector<int> &a, int low, int high)

{
    int count = 0;

    if (low >= high)
        return count;

    int mid = (low + high) / 2;

    count += mergesort(a, low, mid);

    count += mergesort(a, mid + 1, high);

    count += merge(a, low, mid, high);

    return count;
}

int numberOfInversions(vector<int> &a, int n)
{

    return mergesort(a, 0, n - 1);
}