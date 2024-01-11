#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int traffic(int n, int m, vector<int> vehicle)
{
    // 	for(int i=0;i<n;i++)
    // 	{
    //           for (int j = 0; j <m; j++) {
    //             if ((vehicle[j] == 0))
    //               vehicle[j] = 1;
    //           }
    //         }
    // 		int one=0;
    // 		for(int i=0;i<n;i++){
    // 			if(vehicle[i]==1){
    // 				one++;
    // 			}
    // 		}
    // 		return one;
    // }
    int i = 0, j = 0, ans = 0, zeros = 0;

    for (j = 0; j < n; j++)
    {

        if (vehicle[j] == 0)

            zeros++;

        while (zeros > m)
        {

            if (vehicle[i] == 0)

                zeros--;

            i++;
        }

        ans = max(ans, j - i + 1);
    }

    return ans;
}
