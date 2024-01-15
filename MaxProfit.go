func maxProfit(prices []int) int {
    max := 0 
    curr := prices[0]
    for i := 0 ; i < len(prices) ; i++ {
        if prices[i] > curr {
            max = int(math.Max(float64(max) , float64(prices[i] - curr)))
        } else {
            curr = prices[i]
        }
    }
    return max 
}