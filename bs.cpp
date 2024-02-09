// // int search(vector<int> &nums, int target) {
// //     int n=nums.size();
// //     for(int i=0;i<n;i++){

// //             if(nums[i]==target)
// //             {
// //                 return i;
// //             }
// //             }
// //      return -1;
// // }
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int search(vector<int> &nums, int target)
// {

//     // Write your code here.

//     int mid = nums.size() / 2;

//     if (nums[mid] == target)
//         return mid;

//     else if (target <= nums[mid])
//     {

//         for (int i = 0; i < mid; i++)
//         {

//             if (target == nums[i])
//                 return i;
//         }
//     }

//     else if (target > nums[mid])
//     {

//         for (int i = mid + 1; i < nums.size(); i++)
//         {

//             if (target == nums[i])
//                 return i;
//         }
//     }

//     return -1;
// }



// optimsed in logn
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int binarySearch(vector<int> &nums, int target, int low, int high)
{

    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[mid] == target)
        {
            return mid;
        }

        else if (nums[mid] > target)
        {
            return binarySearch(nums, target, low, mid - 1);
        }

        else if (nums[mid] < target)
        {
            return binarySearch(nums, target, mid + 1, high);
        }
    }
}

int search(vector<int> &nums, int target)
{
    return binarySearch(nums, target, 0, nums.size() - 1);
}
