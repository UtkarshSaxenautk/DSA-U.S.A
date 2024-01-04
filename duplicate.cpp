#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int> &arr, int n)
{
    int j = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[j] != arr[i])
        {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}