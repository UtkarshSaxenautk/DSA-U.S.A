func nextPermutation(nums []int)  {
    n := len(nums)
    i := n-2 
    for i>= 0 &&  nums[i] >= nums[i+1]  {
      i--
    }
    if i >= 0 {
        j := n-1
        for nums[j] <= nums[i] {
            j--
        }
        nums[i] , nums[j] = nums[j] , nums[i]
    }
    low := i + 1 
    high := n-1
    for low <= high {
        nums[low] , nums[high] = nums[high] , nums[low]
        low++
        high--
    }
}