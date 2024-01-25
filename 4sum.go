func fourSum(nums []int, target int) [][]int {
    n := len(nums)
    sort.Ints(nums)
    var ans [][]int

    for i := 0; i < n-3; i++ {
        if i > 0 && nums[i] == nums[i-1] {
            continue
        }

        for j := i + 1; j < n-2; j++ {
            if j > i+1 && nums[j] == nums[j-1] {
                continue
            }

            low := j + 1
            high := n - 1
            goal := target - nums[i] - nums[j]

            for low < high {
                currentSum := nums[low] + nums[high]

                if currentSum == goal {
                    ans = append(ans, []int{nums[i], nums[j], nums[low], nums[high]})

                    for low < high && nums[low] == nums[low+1] {
                        low++
                    }
                    for low < high && nums[high] == nums[high-1] {
                        high--
                    }
                    low++
                    high--
                } else if currentSum < goal {
                    low++
                } else {
                    high--
                }
            }
        }
    }

    return ans
}