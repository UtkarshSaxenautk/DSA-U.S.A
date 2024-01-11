#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> sortedArray(vector<int> a, vector<int> b)
{
    // remove duplicates first
    // lets declare an array to store similar elements
    // removing duplicates
    vector<int> result;
    a.erase(unique(a.begin(), a.end()), a.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    // finding common in a and b and storing in result
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < b.size(); j++)
        {
            if (a[i] == b[j])
            {
                result.push_back(a[i]);
                break;
            }
        }
    }
    // finding unique in a and storing in result
    for (int i = 0; i < a.size(); i++)
    {
        if (std::find(result.begin(), result.end(), a[i]) == result.end())
        {
            result.push_back(a[i]);
        }
    }
    // finding unique in b and storing in result
    for (int i = 0; i < b.size(); i++)
    {
        if (std::find(result.begin(), result.end(), b[i]) == result.end())
        {
            result.push_back(b[i]);
        }
    }
    // sort toh karlo beta
    for (int i = 0; i < result.size() - 1; i++)
    {
        int swapi = 0;
        for (int j = 0; j < result.size() - i - 1; j++)
        {
            if (result[j] > result[j + 1])
            {
                swap(result[j], result[j + 1]);

                swapi = 1;
            }
        }

        if (swapi == 0)
        {
            break;
        }
    }
    return result;
}
