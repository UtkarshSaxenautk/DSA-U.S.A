type Pair struct {
    val int 
    index int 
}

func twoSum(nums []int, target int) []int {
    pairs := make([]Pair, len(nums))
	for i, num := range nums {
		pairs[i] = Pair{num, i}
	}

	
	sort.Slice(pairs, func(i, j int) bool {
		return pairs[i].val < pairs[j].val
	})

	
	low, high := 0, len(nums)-1
	for low < high {
		currentSum := pairs[low].val + pairs[high].val
		if currentSum == target {
			return []int{pairs[low].index, pairs[high].index}
		} else if currentSum < target {
			low++
		} else {
			high--
		}
	}

	
	return []int{}
}