// int search(vector<int> &nums, int target) {
//     int n=nums.size();
//     for(int i=0;i<n;i++){

//             if(nums[i]==target)
//             {
//                 return i;
//             }
//             }
//      return -1;
// }
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int search(vector<int> &nums, int target)
{

    // Write your code here.

    int mid = nums.size() / 2;

    if (nums[mid] == target)
        return mid;

    else if (target <= nums[mid])
    {

        for (int i = 0; i < mid; i++)
        {

            if (target == nums[i])
                return i;
        }
    }

    else if (target > nums[mid])
    {

        for (int i = mid + 1; i < nums.size(); i++)
        {

            if (target == nums[i])
                return i;
        }
    }

    return -1;
}
