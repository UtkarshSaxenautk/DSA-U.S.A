func majorityElement(nums []int) []int {
    count1 := 0
    count2 := 0
    x := math.MinInt
    y := math.MinInt
    n := len(nums)

    for i := 0; i < n; i++ {
        if count1 == 0 && y != nums[i] {
            x = nums[i]
            count1 = 1
        } else if count2 == 0 && x != nums[i] {
            y = nums[i]
            count2 = 1
        } else if x == nums[i] {
            count1++
        } else if y == nums[i] {
            count2++
        } else {
            count1--
            count2--
        }
    }

    count1 = 0
    count2 = 0

    for _, val := range nums {
        if val == x {
            count1++
        }
        if val == y {
            count2++
        }
    }

    var ans []int

    if count1 > n/3 {
        ans = append(ans, x)
    }

    if count2 > n/3 {
        ans = append(ans, y)
    }

    return ans
}
