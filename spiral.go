func spiralOrder(matrix [][]int) []int {
    rows,cols:= len(matrix), len(matrix[0])
    result := make([]int,0,rows * cols)
    top,bottom,left,right :=0,rows-1,0,cols-1
    
    for top <= bottom && left <= right {
        for i := left; i <= right; i++ {
            result = append(result, matrix[top][i])
        }
        top++

        for i := top; i<=bottom;i++ {
            result = append(result, matrix[i][right])
        }
        right--

		for i := right; i >= left; i-- {
			 result = append(result, matrix[bottom][i])
		}
		bottom--


		for i := bottom; i >= top; i-- {
            result = append(result, matrix[i][left])
		}
		left++
    }
    return result[:rows*cols]
}

func min(x int , y int) int{
    if x < y {
        return x 
    } 
    return y
}