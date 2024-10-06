package main

import (
	"fmt"
	"slices"
)

type Job struct {
	ID       int
	Deadline int
	Profit   int
}

func maxjobs(jobs []Job, n int) (int, int) {
	slices.SortFunc(jobs, func(a Job, b Job) int {
		if a.Profit > b.Profit {
			return -1
		} else {
			return 1
		}
	})
	count := 0
	profit := 0
	mp := make(map[int]int)
	for i := 0; i < len(jobs); i++ {
		if _, ok := mp[jobs[i].Deadline]; !ok {
			mp[jobs[i].Deadline] = 1
			count++
			profit += jobs[i].Profit
		}
	}
	return count, profit
}

func main() {
	jobs := []Job{{ID: 1, Deadline: 4, Profit: 20}, {2, 1, 1}, {3, 1, 40}, {4, 1, 30}}
	count, profit := maxjobs(jobs, 4)
	fmt.Println(count, " : ", profit)
}
