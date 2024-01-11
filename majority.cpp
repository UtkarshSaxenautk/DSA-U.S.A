#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int majorityElement(vector<int> v)
{
    sort(v.begin(), v.end());
    int n = v.size();
    int m = n / 2;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == v[i + 1])
            count++;

        else if (count > m)
            return v[i];
        else if (v[i] != v[i + 1])
            count = 1;
    }
}
