func maxSubArray(nums []int) int {
    ans := math.MinInt
    curr := 0 
    for i := 0 ; i < len(nums); i++ {
        curr += nums[i]
        if curr > ans {
            ans = curr
        } 
        if curr < 0 {
            curr = 0
        }
    }
    return ans
}