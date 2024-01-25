func threeSum(nums []int) [][]int {
   sort.Ints(nums)
   n := len(nums)
   var ans [][]int
   for i := 0 ; i < n ; i++ {
       if i > 0 && nums[i] == nums[i-1] {
           continue
       }
       l := i +1 
       h := n-1
       for l < h  {
           if nums[i] + nums[l] + nums[h] == 0 {   
              slice := []int{nums[i] , nums[l] , nums[h]}
              ans = append(ans , slice)
              
              for l < h && nums[l] == nums[l+1] {
                  l++
              }
              for l < h && nums[h] == nums[h-1] {
                  h--
              }
              l++
              h--
           }else if nums[i] + nums[l] + nums[h] > 0 {
               h-- 
           } else {
               l++
           }
           
       }
   } 
   return ans 
}