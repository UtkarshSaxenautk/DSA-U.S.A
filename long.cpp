#include <vector>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getLongestZeroSumSubarrayLength(vector<int> &arr)
{
    int n = arr.size();
    int longest = 0;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];

            if (sum == 0)
            {
                int l = j - i + 1;

                longest = max(longest, l);
            }
        }

        return longest;
    };
