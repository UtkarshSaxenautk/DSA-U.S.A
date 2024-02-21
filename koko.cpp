#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int minimumRateToEatBananas(vector<int> v, int h)
{
    int n = v.size();
    int s = 1;
    int e = *max_element(v.begin(), v.end());
    while (s <= e)
    {
        int m = (s + e) / 2;
        int val = 0;
        for (int i = 0; i < n; i++)
        {
            val += ceil(double(v[i]) / double(m));
        }

        if (val <= h)
        {
            e = m - 1;
        }
        else if (val > h)
        {
            s = m + 1;
        }
        return s;
    }
}