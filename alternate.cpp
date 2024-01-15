#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> alternateNumbers(vector<int> &a)
{
    int n = a.size();
    vector<int> result(n, 0);
    int pos = 0;
    int neg = 1;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > 0)
        {
            result[pos] = a[i];
            pos += 2;
        }
        else
        {
            result[neg] = a[i];
            neg += 2;
        }
    }
    return result;
}