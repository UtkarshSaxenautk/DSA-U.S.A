#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isUsedMoreThanK(vector<int> &arr, double mid, int k)
{

    int n = arr.size();

    int used = 0;

    for (int i = 0; i < n - 1; i++)

        used += (arr[i + 1] - arr[i]) / mid;

    return used > k;
}

double minimiseMaxDistance(vector<int> &arr, int k)
{

    int n = arr.size();

    double lo = 0, hi = 1e9, eps = 1e-6, dist = 0;

    while (hi - lo > eps)
    {

        double mid = (lo + hi) / 2.0;

        if (isUsedMoreThanK(arr, mid, k))
        {

            lo = mid;
        }
        else
        {

            hi = mid;

            dist = mid;
        }
    }

    return dist;
}
