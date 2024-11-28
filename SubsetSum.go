package main

import "fmt"

func SubsetSum(arr []int, n int) (sum []int) {
	helper(arr, 0, 0, &sum)
	return sum
}

func helper(arr []int, index int, currSum int, sum *[]int) {
	if index == len(arr) {
		*sum = append(*sum, currSum)
		return
	}
	helper(arr, index+1, currSum, sum)
	helper(arr, index+1, currSum+arr[index], sum)

}

func main() {
	arr := []int{2, 3}
	sum := SubsetSum(arr, 2)
	fmt.Println(sum)
}
