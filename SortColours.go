func sortColors(nums []int)  {
    zero := 0 
    for i := 0 ; i < len(nums); i++ {
        if nums[i] == 0 {
            temp := nums[i]
            nums[i] = nums[zero]
            nums[zero] = temp
            zero++
        }
    }

    one := zero
    for i := zero ; i < len(nums); i++ {
        if nums[i] == 1 {
            temp := nums[i]
            nums[i] = nums[one]
            nums[one] = temp
            one++
        }
    }

}