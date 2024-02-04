#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// int team(vector <int> & skill, int n)
// {
//     int c=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if((i<j)&&(skill[i]>2*skill[j])){
//                 c++;
//             }
//         }
//     }
//     return c;
// }
int ans = 0;
void merge(vector<int> &arr, int l, int mid, int r)
{

    int l1 = l, l2 = mid + 1, n1 = mid, n2 = r;
    int n = r - l + 1;
    vector<int> temp(n);
    int k = 0, i = l1, j = l2;
    while (i <= n1 && j <= n2)
    {
        if (arr[i] > (long long)2 * arr[j])
        {
            ans += (n1 - i + 1);
            j++;
        }
        else
            i++;
    }
    while (l1 <= n1 && l2 <= n2)
    {
        if (arr[l1] < arr[l2])
        {
            temp[k++] = arr[l1++];
        }
        else
        {

            temp[k++] = arr[l2++];
        }
    }
    while (l1 <= n1)
    {
        temp[k++] = arr[l1++];
    }
    while (l2 <= n2)
    {
        temp[k++] = arr[l2++];
    }
    for (int i = 0; i < n; i++)
    {
        arr[l + i] = temp[i];
    }
}
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

int team(vector<int> &nums, int n)
{
    mergeSort(nums, 0, n - 1);
    return ans;
}
