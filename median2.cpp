#include <bits/stdc++.h>

//  #include<vector>
using namespace std;

int occurrence_in_rows(vector<int> arr, int x, int col)

{

    int low = 0;

    int high = col - 1;

    while (low <= high)

    {

        int mid = low + (high - low) / 2;

        if (arr[mid] <= x)

        {

            low = mid + 1;
        }

        else

        {

            high = mid - 1;
        }
    }

    return low;
}

int occurrence(vector<vector<int>> &matrix, int mid, int row, int col)

{

    int count = 0;

    for (int j = 0; j < row; j++)

    {

        count += occurrence_in_rows(matrix[j], mid, col);
    }

    return count;
}

int median(vector<vector<int>> &matrix, int n, int m)
{

    // Write your code here.

    int low = INT_MAX;

    int high = INT_MIN;

    int req = m * n / 2;

    for (int i = 0; i < n; i++)

    {

        low = min(low, matrix[i][0]);

        high = max(high, matrix[i][m - 1]);
    }

    while (low <= high)

    {

        int mid = low + (high - low) / 2;

        if (req >= occurrence(matrix, mid, n, m))

        {

            low = mid + 1;
        }

        else

        {

            high = mid - 1;
        }
    }

    return low;
}
