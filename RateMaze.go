package main

import "fmt"

func main() {
	graph := [][]int{
		{1, 0, 0, 0},
		{1, 1, 0, 1},
		{1, 1, 0, 0},
		{0, 1, 1, 1},
	}
	visited := make([][]bool, len(graph))
	for i := 0; i < len(graph); i++ {
		visited[i] = make([]bool, len(graph[i]))
	}
	path := make([]rune, 0)
	ans := make([][]rune, 0)
	visited[0][0] = true
	solveMaze(&graph, &visited, 0, 0, &path, &ans)
	for i := 0; i < len(ans); i++ {
		for j := 0; j < len(ans[i]); j++ {
			fmt.Print(string(ans[i][j]), ",")
		}
		fmt.Println()
	}
}

func solveMaze(graph *[][]int, visited *[][]bool, currR int, currC int, path *[]rune, ans *[][]rune) {
	if currR == len(*graph)-1 && currC == len((*graph)[0])-1 {
		tmp := make([]rune, len(*path))
		copy(tmp, *path)
		(*ans) = append(*ans, tmp)
		return
	}
	//down
	if (currR+1) < len(*graph) && (*graph)[currR+1][currC] != 0 && (*visited)[currR+1][currC] == false {
		*path = append(*path, 'D')
		(*visited)[currR+1][currC] = true
		solveMaze(graph, visited, currR+1, currC, path, ans)
		(*path) = (*path)[:len(*path)-1]
		(*visited)[currR+1][currC] = false
	}
	//up
	if (currR-1) >= 0 && (*graph)[currR-1][currC] != 0 && (*visited)[currR-1][currC] == false {
		*path = append(*path, 'U')
		(*visited)[currR-1][currC] = true
		solveMaze(graph, visited, currR-1, currC, path, ans)
		(*path) = (*path)[:len(*path)-1]
		(*visited)[currR-1][currC] = false
	}
	//left
	if (currC-1) >= 0 && (*graph)[currR][currC-1] != 0 && (*visited)[currR][currC-1] == false {
		*path = append(*path, 'L')
		(*visited)[currR][currC-1] = true
		solveMaze(graph, visited, currR, currC-1, path, ans)
		(*path) = (*path)[:len(*path)-1]
		(*visited)[currR][currC-1] = false
	}
	//right
	if (currC+1) < len((*graph)[0]) && (*graph)[currR][currC+1] != 0 && (*visited)[currR][currC+1] == false {
		*path = append(*path, 'R')
		(*visited)[currR][currC+1] = true
		solveMaze(graph, visited, currR, currC+1, path, ans)
		(*path) = (*path)[:len(*path)-1]
		(*visited)[currR][currC+1] = false
	}
}
