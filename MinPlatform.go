package main

import (
	"fmt"
	"slices"
)

func max(a int, b int) int {
	if a > b {
		return a
	}
	return b
}

func minPlatforms(arr []int, depart []int) int {
	ans := 1
	slices.Sort(arr)
	slices.Sort(depart)
	currTrains := 1
	i := 1
	j := 0
	for i < len(arr) && j < len(depart) {
		if arr[i] <= depart[j] {
			currTrains++
			i++
		} else {
			currTrains--
			j++
		}
		ans = max(ans, currTrains)
	}
	return ans
}

func main() {
	arr := []int{900, 940, 950, 1100, 1500, 1800}
	depart := []int{910, 1200, 1120, 1130, 1900, 2000}
	ans := minPlatforms(arr, depart)
	fmt.Println("ans : ", ans)
}
