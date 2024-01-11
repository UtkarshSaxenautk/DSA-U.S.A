#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#include <vector>
int getSingleElement(vector<int> &arr)
{
    int one = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        one ^= arr[i];
    }
    return one;
}
