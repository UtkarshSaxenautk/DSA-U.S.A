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
	morrisInorder(treeNode)
}

func morrisInorder(treeNode *TreeNode) {
	curr := treeNode
	for curr != nil {
		if curr.Left == nil {
			fmt.Print(curr.Val, " ")
			curr = curr.Right
		} else {
			prev := curr.Left
			for prev.Right != nil && prev.Right != curr {
				prev = prev.Right
			}

			if prev.Right == nil {
				prev.Right = curr
				curr = curr.Left
			} else {
				prev.Right = nil
				fmt.Print(curr.Val, " ")
				curr = curr.Right
			}
		}
	}
}
