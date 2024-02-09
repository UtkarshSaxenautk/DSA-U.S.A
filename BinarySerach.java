class Solution {
    public int search(int[] nums, int target) {
        // int low = 0;
        // int high = nums.length -1;
        // while(low <= high) {
        //     int mid = low + (high -low)/2;
        //     if(nums[mid] == target){
        //         return mid ;
        //     }
        //     else if(nums[mid] > target){
        //         high = mid-1;
        //     } else {
        //         low = mid+1;
        //     }
        // }
        // return -1;
        return helper(nums , 0 , nums.length - 1, target);
    }

    public int helper(int[] nums , int low , int high , int target){
        if(low > high) {
            return -1;
        }
        int mid = low + (high -low)/2;
        if(nums[mid] == target){
            return mid ;
        }
        else if(nums[mid] > target){
            return helper(nums , low , mid-1 , target);
        }
        return helper(nums , mid+1 , high , target);
    } 
}