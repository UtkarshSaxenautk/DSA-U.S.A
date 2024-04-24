#include <iostream>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
int sumOfBeauty(string s)
{

    int n = s.size();
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        unordered_map<char, int> mp;
        for (int j = i; j < n; j++)
        {
            mp[s[j]]++;
            int mini = INT_MAX;
            int maxi = INT_MIN;
            for (auto it : mp)
            {
                maxi = max(maxi, it.second);
                mini = min(mini, it.second);
            }
            ans += maxi - mini;
        }
    }
    return ans;
}
