func rearrangeArray(nums []int) []int {
    pos := 0 
    neg := 1
    length := len(nums)
    res := make([]int , length)
    for i := 0 ; i < length ; i++ {
        if nums[i] >= 0 {
            res[pos] = nums[i]
            pos += 2
        } else {
            res[neg] = nums[i]
            neg += 2
        }
    }
    return res 
    
}