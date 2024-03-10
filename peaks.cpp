#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> findPeakGrid(vector<vector<int>> &g)
{

    // Write your code here.

    int n = g.size();

    int m = g[0].size();

    int ans1 = -1, ans2 = -1;

    int max = g[0][0];

    for (int i = 0; i < n; i++)

    {

        if (g[i][m - 1] >= max)

        {

            max = g[i][m - 1];

            ans1 = i;

            ans2 = m - 1;
        }

        else if (g[i][0] >= max)

        {

            max = g[i][0];

            ans1 = i;

            ans2 = 0;
        }
    }

    return {ans1, ans2};
}
