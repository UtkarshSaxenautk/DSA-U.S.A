#include <vector>
using namespace std;
int rowWithMax1s(vector<vector<int>> &matrix, int n, int m)

{
    int c = -1;

    for (int i = 0; i < m; ++i)

    {

        for (int j = 0; j < n; ++j)

        {

            if (matrix[j][i] == 1)

            {

                c = j;
                break;
            }
        }

        if (c != -1)

        {

            break;
        }
    }
    return c;
}