#include <iostream>
using namespace std;

class Solution
{
public:
    string largestOddNumber(string num)
    {

        string ans = "";
        int ind = -1;
        for (int i = num.size() - 1; i >= 0; i--)
        {
            if ((num[i] - '0') % 2 != 0)
            {
                ind = i;
                break;
            }
        }
        if (ind != -1)
        {
            for (int i = 0; i <= ind; i++)
            {
                ans += num[i];
            }
        }
        return ans;
    }
};