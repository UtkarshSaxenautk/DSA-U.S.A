#include <iostream>

int secondSmallest(vector<int> a, int n)
{
    if (n < 2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            second_small = small;
            small = a[i];
        }
        else if (a[i] < second_small && a[i] != small)
        {
            second_small = a[i];
        }
    }
    return second_small;
}

int secondLargest(vector<int> a, int n)
{
    if (n < 2)
        return -1;
    int large = INT_MIN, second_large = INT_MIN;
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > large)
        {
            second_large = large;
            large = a[i];
        }

        else if (a[i] > second_large && a[i] != large)
        {
            second_large = a[i];
        }
    }
    return second_large;
}

vector<int> getSecondOrderElements(int n, vector<int> a)
{
    int sLargest = secondLargest(a, n);
    int sSmallest = secondSmallest(a, n);
    return {sLargest, sSmallest};
}
