#include <bits/stdc++.h>
using namespace std;
int createAtoi(string s)
{
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (!s[i + 1] >= 'a' || !s[i + 1] <= 'z')
        {
            res += s[i];
        }
    }
    stringstream ans;
    ans << res;
    int total = 0;
    ans >> total;
    return total;
}