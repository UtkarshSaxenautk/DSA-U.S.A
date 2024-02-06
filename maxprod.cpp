
// #include<vector>
// int subarrayWithMaxProduct(vector<int> &arr) {
//     int n = arr.size();
//     int maxProduct = -9999;

//     for (int i = 0; i < n; i++) {
//         int currentProduct = 1;
//         for (int j = i; j < n; j++) {
//             currentProduct *= arr[j];
//             maxProduct = max(maxProduct, currentProduct);
//         }
//     }

//     return maxProduct;
// }
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int subarrayWithMaxProduct(vector<int> &arr)
{

    int maxi = INT_MIN;

    int prefix = 1;

    int suffix = 1;

    int n = arr.size();

    for (int i = 0; i < n; i++)
    {

        if (prefix == 0)
            prefix = 1;

        if (suffix == 0)
            suffix = 1;

        prefix = arr[i] * prefix;

        suffix = arr[n - i - 1] * suffix;

        maxi = max(maxi, max(prefix, suffix));
    }

    return maxi;
}