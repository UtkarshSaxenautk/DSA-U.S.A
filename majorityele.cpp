#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findans(vector<int> v, vector<int> &ans, int n)
{

    sort(begin(v), end(v));

    int count = 0;

    for (int i = 0; i < n; i++)

    {

        if (v[i] == v[i + 1])

        {
            count++;
        }

        else if (v[i] != v[i + 1])

        {

            if (count >= (n / 3))

                ans.push_back(v[i]);

            count = 0;
        }
    }

    return ans;
}

vector<int> majorityElement(vector<int> v)
{

    vector<int> ans;

    int n = v.size();

    return findans(v, ans, n);
}