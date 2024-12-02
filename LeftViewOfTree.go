package main

import "fmt"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func main() {
	treeNode := &TreeNode{
		Val: 1,
	}
	treeNode.Left = &TreeNode{
		Val: 2,
	}
	treeNode.Right = &TreeNode{
		Val: 3,
	}
	treeNode.Left.Left = &TreeNode{
		Val: 4,
	}
	treeNode.Left.Right = &TreeNode{
		Val: 5,
	}
	treeNode.Left.Right.Left = &TreeNode{
		Val: 6,
	}
	treeNode.Left.Right.Right = &TreeNode{
		Val: 7,
	}
	treeNode.Right.Right = &TreeNode{
		Val: 8,
	}
	treeNode.Right.Right.Left = &TreeNode{
		Val: 9,
	}
	ans := make([]int, 0)
	leftTree(treeNode, 0, &ans)
	for _, x := range ans {
		fmt.Print(x, "  ")
	}
}

func leftTree(tree *TreeNode, level int, ans *[]int) {
	if tree == nil {
		return
	}
	if level == len(*ans) {
		*ans = append(*ans, tree.Val)
	}
	leftTree(tree.Left, level+1, ans)
	leftTree(tree.Right, level+1, ans)
}
