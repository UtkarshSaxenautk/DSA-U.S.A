package main

import "fmt"

const maxVal = 100000001

func minCoin(coins []int, sum int) int {
	if sum == 0 {
		return 0
	}
	res := maxVal
	for i := 0; i < len(coins); i++ {
		if coins[i] <= sum {
			curr := 1 + minCoin(coins, sum-coins[i])
			if curr < maxVal {
				res = min(res, curr)
			}

		}
	}
	return res
}

func main() {
	coins := []int{5, 1}
	sum := 0
	fmt.Println(minCoin(coins, sum))
}
