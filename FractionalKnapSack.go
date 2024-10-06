package main

import (
	"fmt"
	"slices"
)

type item struct {
	Value      int
	Weight     int
	Fractional float32
}

func min(a int, b int) int {
	if a > b {
		return b
	}
	return a
}

func fractional(n int, w int, value []int, weight []int) (ans float32) {
	var items []item
	for i := 0; i < n; i++ {
		items = append(items, item{
			Weight:     weight[i],
			Value:      value[i],
			Fractional: float32(value[i] / weight[i]),
		})
	}
	slices.SortFunc(items, func(a item, b item) int {
		if a.Fractional > b.Fractional {
			return -1
		}
		return 1
	})
	used := 0
	for i := 0; i < n; i++ {
		canBeUsed := w - used
		if canBeUsed <= 0 {
			break
		}
		usedInRun := min(canBeUsed, items[i].Weight)
		ans += float32(float32(usedInRun) * items[i].Fractional)
		used += usedInRun
	}
	return
}

func main() {
	n := 2
	w := 50
	value := []int{60, 100}
	weight := []int{10, 20}
	ans := fractional(n, w, value, weight)
	fmt.Println("ans : ", ans)
}
