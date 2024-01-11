#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int n = a.size();
    int i = 0;
    int j = 0;
    int ans = 0;
    long long sum = 0;
    while (j < n)
    {
        sum += a[j];
        //    j++;
        if (sum < k)
        {
            j++;
        }
        else if (sum == k)
        {
            ans = max(ans, j - i + 1);
            j++;
        }
        else if (sum > k)
        {
            while (sum > k)
            {
                sum -= a[i];
                i++;
            }

            if (sum == k)
            {
                ans = max(ans, j - i + 1); // j-i+1 gives length of cuurent sub
                                           //    array
            }
            j++;
        }
    }
    return ans;
}
