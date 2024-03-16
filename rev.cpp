#include <bits/stdc++.h>
using namespace std;
string reverseString(string &s)
{

    int n = s.size();

    string ans = "";

    for (int i = n - 1; i >= 0; i--)
    {

        if (s[i] != ' ')
        {

            int end = i;

            while (i >= 0 and s[i] != ' ')
            {

                i--;
            }

            int start = i + 1;

            if (ans == "")
            {

                ans += s.substr(start, end - start + 1);
            }

            else
            {

                ans += " " + s.substr(start, end - start + 1);
            }
        }
    }

    return ans;
}
