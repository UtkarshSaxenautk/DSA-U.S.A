#include <iostream>
#include <vector>
using namespace std;
int getmaxi(vector<int> &weights)
{

    int maxi = weights[0];

    for (int i = 0; i < weights.size(); i++)
    {

        maxi = max(maxi, weights[i]);
    }

    return maxi;
}

int getsum(vector<int> &weights)
{

    int sum = 0;

    for (int i = 0; i < weights.size(); i++)
    {

        sum += weights[i];
    }

    return sum;
}

bool isPossible(vector<int> &weights, int d, int i)
{

    int day = 1;

    int wght = weights[0];

    for (int j = 1; j < weights.size(); j++)
    {

        if (wght + weights[j] <= i)
        {

            wght += weights[j];
        }

        else
        {

            day++;

            wght = weights[j];
        }
    }

    if (day <= d)
    {

        return true;
    }

    return false;
}

int leastWeightCapacity(vector<int> &weights, int d)

{

    // brute force approach

    int sum = getsum(weights);

    int maxi = getmaxi(weights);

    int low = maxi;

    int high = sum;

    while (low <= high)
    {

        int mid = (low + high) / 2;
        ;

        if (isPossible(weights, d, mid))
        {

            high = mid - 1;
        }

        else
        {

            low = mid + 1;
        }
    }

    return low;
}