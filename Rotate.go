func rotate(matrix [][]int)  {
    for i := 0 ; i < len(matrix); i++ {
        for j := i+1 ; j < len(matrix[0]) ; j++ {
            matrix[i][j] , matrix[j][i] = matrix[j][i] , matrix[i][j]
        }
    }

    for i := 0 ; i < len(matrix); i++ {
        low := 0 
        high := len(matrix[0]) - 1 
        for low < high {
            matrix[i][low] , matrix[i][high] = matrix[i][high] , matrix[i][low]
            low++
            high--
        }
        
    }
}