public class SingleNumber {
    public int singleNumber(int[] nums) {
        int n = nums.length;
        if (n == 0)
            return -1;
        int xor = nums[0];
        for (int i = 1; i < n; i++) {
            xor ^= nums[i];
        }
        return xor;
    }
}
