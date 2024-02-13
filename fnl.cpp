#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int firstocc(vector<int> &arr, int n, int k)
{

    int START = 0;

    int END = n - 1;

    int mid = START + (END - START) / 2;

    int ans = -1;

    while (START <= END)
    {

        if (arr[mid] == k)
        {

            ans = mid;

            END = mid - 1;
        }

        else if (k > arr[mid])
        {

            START = mid + 1;
        }

        else
        {

            END = mid - 1;
        }

        mid = START + (END - START) / 2;
    }

    return ans;
}

int lastocc(vector<int> &arr, int n, int k)
{

    int START = 0;

    int END = n - 1;

    int mid = START + (END - START) / 2;

    int ans = -1;

    while (START <= END)
    {

        if (arr[mid] == k)
        {

            ans = mid;

            START = mid + 1;
        }

        else if (k > arr[mid])
        {

            START = mid + 1;
        }

        else
        {

            END = mid - 1;
        }

        mid = START + (END - START) / 2;
    }

    return ans;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k)
{

    pair<int, int> p;

    p.first = firstocc(arr, n, k);

    p.second = lastocc(arr, n, k);

    return p;
}