#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
double median(vector<int> &a, vector<int> &b)
{

    int n1 = a.size();

    int n2 = b.size();

    int n = n1 + n2;

    int i = 0;

    int j = 0;

    int ind1 = n / 2;

    int ind2 = ind1 - 1;

    int cnt = 0;

    int ind1el = -1;

    int ind2el = -1;

    int flag = -1;

    while (i < n1 && j < n2)
    {

        if (a[i] < b[j])
        {

            if (cnt == ind1)
            {

                ind1el = a[i];
            }

            if (cnt == ind2)
            {

                ind2el = a[i];

                // Break after updating ind2el
            }

            if (ind1el != -1 and ind2el != -1)
            {

                flag = 0;

                break;
            }

            cnt++;

            i++;
        }
        else
        {

            if (cnt == ind1)
            {

                ind1el = b[j];
            }

            if (cnt == ind2)
            {

                ind2el = b[j];

                // Break after updating ind2el
            }

            if (ind1el != -1 and ind2el != -1)
            {

                flag = 0;

                break;
            }

            cnt++;

            j++;
        }
    }

    while (i < n1 and flag == -1)
    {

        if (cnt == ind1)
        {

            ind1el = a[i];
        }

        if (cnt == ind2)
        {

            ind2el = a[i];

            // Break after updating ind2el
        }

        if (ind1el != -1 and ind2el != -1)
        {

            flag = 0;

            break;
        }

        cnt++;

        i++;
    }

    while (j < n2 and flag == -1)
    {

        if (cnt == ind1)
        {

            ind1el = b[j];
        }

        if (cnt == ind2)
        {

            ind2el = b[j];

            // Break after updating ind2el
        }

        if (ind1el != -1 and ind2el != -1)
        {

            flag = 0;

            break;
        }

        cnt++;

        j++;
    }

    // odd -> return n1

    if (n % 2 == 1)
    {

        return double(ind1el);
    }
    else
    {

        return double(double(ind1el + ind2el) / 2.0);
    }
}
