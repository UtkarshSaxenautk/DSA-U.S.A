#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int getmaxi(vector<int> &arr)
{
    int maxi = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        maxi = max(maxi, arr[i]);
    }
    return maxi;
}

int findsum(vector<int> &arr, int n, int mid)
{
    double ceil(double x);
    int sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += ceil((double)(arr[i]) / (double)(mid));
    }
    return sum;
}

int smallestDivisor(vector<int> &arr, int limit)
{
    int maxi = getmaxi(arr);
    int low = 1;
    int high = maxi;
    int n = arr.size();
    int ans = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        int sum = findsum(arr, n, mid);
        if (sum <= limit)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
}