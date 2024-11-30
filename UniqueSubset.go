package main

import (
	"fmt"
	"sort"
)

func Subset(arr []int, index int, currArr []int, ans *[][]int) {
	tmp := make([]int, len(currArr))
	copy(tmp, currArr)
	*ans = append(*ans, tmp)

	for i := index; i < len(arr); i++ {
		if i > index && arr[i] == arr[i-1] {
			continue
		}
		currArr = append(currArr, arr[i])
		Subset(arr, i+1, currArr, ans)
		currArr = currArr[:len(currArr)-1]
	}
}

func main() {
	nums := []int{1, 2, 2}
	sort.Ints(nums)

	ans := make([][]int, 0)
	Subset(nums, 0, []int{}, &ans)

	for _, subset := range ans {
		fmt.Println(subset)
	}
}
