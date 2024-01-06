#include <iostream>
#include <vector>
using namespace std;
// vector<int> moveZeros(int n, vector<int> a) {
//     vector<int> temp;
//     int z=0;
//     int j=0;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]==0)
//         z++;
//     }
//     for(int i=n-z;i<n;i++)
//     {
//         a[i]=0;
//     }
//     for(int i=0;i<n;i++)
//     {
//         if (a[i]!=0)
//         temp.push_back(a[i]);
//     }
//      for (int i = 0; i < n; i++)
//      {
//         a[i] = temp[i];
//      }

//     return a;
// }

vector<int> moveZeros(int n, vector<int> a)
{
    vector<int> temp;
    int z = 0;
    int j = 0;

    // Count the number of zeros
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
            z++;
    }

    // Move non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
            temp.push_back(a[i]);
    }

    // Fill the remaining positions with zeros
    for (int i = 0; i < z; i++)
    {
        temp.push_back(0);
    }

    // Copy the modified array back to 'a'
    for (int i = 0; i < n; i++)
    {
        a[i] = temp[i];
    }

    return a;
}
