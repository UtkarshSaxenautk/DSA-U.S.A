package main

func combinationSum(candidates []int, target int) [][]int {
	ans := make([][]int, 0)
	temp := make([]int, 0)
	helper(candidates, target, temp, 0, &ans)
	return ans
}

func helper(candidates []int, target int, temp []int, index int, ans *[][]int) {
	if target == 0 {
		tmp := make([]int, len(temp))
		copy(tmp, temp)
		*ans = append(*ans, tmp)
		return
	}

	if index == len(candidates) || target < 0 {
		return
	}

	temp = append(temp, candidates[index])
	helper(candidates, target-candidates[index], temp, index, ans)
	temp = temp[:len(temp)-1]
	helper(candidates, target, temp, index+1, ans)
}
