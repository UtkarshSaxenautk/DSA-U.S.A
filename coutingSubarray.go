func subarraySum(nums []int, k int) int {
    sum := 0 
    count := 0 

    mp := map[int]int{}

    mp[0] = 1

    for i := 0 ; i < len(nums); i++ {
        sum += nums[i]

        if val , ok := mp[sum - k]; ok {
            count += val
        }

        if val , ok := mp[sum] ; ok {
            mp[sum] = val +  1
        } else {
            mp[sum] = 1
        }
    }
    return count 
}