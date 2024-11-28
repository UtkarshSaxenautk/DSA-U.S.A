package main

import "fmt"

func main() {
	// Graph represented as an edge list
	edges := [][]int{
		{0, 1},
		{1, 2},
		{2, 3},
		{3, 0},
		{0, 2},
	}
	N := 4 // Number of nodes
	M := 3 // Number of colors

	// Convert edge list to adjacency list
	graph := make([][]int, N)
	for _, edge := range edges {
		u, v := edge[0], edge[1]
		graph[u] = append(graph[u], v)
		graph[v] = append(graph[v], u)
	}

	colors := make([]int, N) // Colors array for N nodes
	if solve(0, graph, &colors, N, M) {
		fmt.Println("Solution found:", colors)
	} else {
		fmt.Println("No solution exists")
	}
}

// Check if it's safe to color the node with a specific color
func safe(node int, graph [][]int, colors []int, color int) bool {
	for _, neighbor := range graph[node] {
		if colors[neighbor] == color { // Adjacent node has the same color
			return false
		}
	}
	return true
}

// Recursive backtracking function to solve the coloring problem
func solve(node int, graph [][]int, colors *[]int, n int, m int) bool {
	if node == n { // All nodes have been colored
		return true
	}

	for i := 1; i <= m; i++ { // Try all colors
		if safe(node, graph, *colors, i) {
			(*colors)[node] = i                     // Assign color
			if solve(node+1, graph, colors, n, m) { // Recur for the next node
				return true
			}
			(*colors)[node] = 0 // Backtrack
		}
	}
	return false // No valid coloring found
}
