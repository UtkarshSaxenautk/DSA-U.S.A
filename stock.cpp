#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int bestTimeToBuyAndSellStock(vector<int> &prices)
{
    int low = 0, high = 0, curr = 0, res = 0;
    for (int i = 0; i < prices.size(); i++)
    {
        low = i;
        high = i + 1;
        curr = prices[high] - prices[low];
        while ((prices[high] > prices[low]) && (high < prices.size()))
        {
            curr = prices[high] - prices[low];

            res = max(res, curr);
            high++;
        }
    }
    return res;
}
