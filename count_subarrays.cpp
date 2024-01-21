#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int findAllSubarraysWithGivenSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int current_sum = 0;
    int j = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += arr[i];
        while (current_sum > k)
        {
            current_sum -= arr[j];
            j++;
        }
        if (current_sum == k)
        {
            count++;
        }
    }
    return count;
}