// You are given timings of n meetings in the form of (start[i], end[i]) where start[i] is the start time of meeting i and end[i] is the finish time of meeting i. Return the maximum number of meetings that can be accommodated in a single meeting room, when only one meeting can be held in the meeting room at a particular time.

// Note: The start time of one chosen meeting can't be equal to the end time of the other chosen meeting.

// Examples :

// Input: n = 6, start[] = [1, 3, 0, 5, 8, 5], end[] =  [2, 4, 6, 7, 9, 9]
// Output: 4
// Explanation: Maximum four meetings can be held with given start and end timings. The meetings are - (1, 2), (3, 4), (5,7) and (8,9)

package main

import (
	"fmt"
	"slices"
)

type slot struct {
	Start int
	End   int
}

func maxMettings(n int, start []int, end []int) int {
	slots := make([]slot, 0)
	for i := 0; i < n; i++ {
		slots = append(slots, slot{start[i], end[i]})
	}
	slices.SortFunc(slots, func(a, b slot) int {
		if a.End < b.End {
			return -1
		} else if a.End > b.End {
			return 1
		}
		return 0
	})
	max := 1
	lastPrev := slots[0].End
	for i := 1; i < n; i++ {
		if lastPrev < slots[i].Start {
			max += 1
			lastPrev = slots[i].End
		}

	}
	return max
}

func main() {
	start := []int{1, 3, 0, 5, 8, 5}
	end := []int{2, 4, 6, 7, 9, 9}
	n := maxMettings(6, start, end)
	fmt.Println(n)
}
