package main

import (
	"fmt"
	"sort"
)

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func bottomLevelView(root *TreeNode, mp map[int][2]int, level, horizontal int) {
	if root == nil {
		return
	}

	if _, exists := mp[horizontal]; !exists || mp[horizontal][1] <= level {
		mp[horizontal] = [2]int{root.Val, level}
	}

	bottomLevelView(root.Left, mp, level+1, horizontal-1)
	bottomLevelView(root.Right, mp, level+1, horizontal+1)
}

func main() {
	// Example tree
	root := &TreeNode{Val: 20}
	root.Left = &TreeNode{Val: 8}
	root.Right = &TreeNode{Val: 22}
	root.Left.Left = &TreeNode{Val: 5}
	root.Left.Right = &TreeNode{Val: 3}
	root.Left.Right.Left = &TreeNode{Val: 10}
	root.Left.Right.Right = &TreeNode{Val: 14}
	root.Right.Right = &TreeNode{Val: 25}

	ans := make(map[int][2]int)
	bottomLevelView(root, ans, 0, 0)

	keys := make([]int, 0, len(ans))
	for k := range ans {
		keys = append(keys, k)
	}

	sort.Ints(keys)
	for _, k := range keys {
		fmt.Print(ans[k][0], " ")
	}
}
