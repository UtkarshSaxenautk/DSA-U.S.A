#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> pascalTriangle(int N)
{
    vector<vector<int>> result;
    for (int i = 0; i < N; i++)
    {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(row);
    }
    return result;
}
