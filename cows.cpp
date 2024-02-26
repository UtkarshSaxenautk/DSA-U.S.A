#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
bool dis(vector<int> &stalls, int mid, int k)
{
    int countcow = 1;
    int pos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            countcow++;

            pos = stalls[i];
            if (countcow >= k)
            {
                return true;
            }
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int ans = -1;
    int max = *max_element(stalls.begin(), stalls.end());
    int min = *min_element(stalls.begin(), stalls.end());
    int e = max - min;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (dis(stalls, mid, k) == true)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}