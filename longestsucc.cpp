#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int longestSuccessiveElements(vector<int> &a)
{

    int n = a.size();

    int length = 1;

    for (int i = 0; i < n; i++)
    {

        int temp = a[i];

        int count = 1;

        while (find(a.begin(), a.end(), temp + 1) != a.end())
        {

            temp = temp + 1;

            count = count + 1;
        }

        length = max(length, count);
    }

    return length;
}