#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> superiorElements(vector<int> &a)
{
    int maxi = 0;
    vector<int> x;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            x.push_back(a[i]);
            maxi = max(a[i], maxi);
        }
    }
    return x;
}