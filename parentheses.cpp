#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxDepth(string s)
{
    int count = 0;

    int maxi = 0;

    for (int i = 0; i < s.length(); i++)

    {

        if (s[i] == '(')
        {

            count++;

            maxi = max(count, maxi);
        }
        if (s[i] == ')')
        {

            count--;
        }
    }

    return maxi;
}
