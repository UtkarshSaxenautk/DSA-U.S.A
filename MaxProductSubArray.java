import java.util.HashMap;
import java.util.Map;

public class MaxProductSubArray {
    private long solve(int[] nums, int i, long c, Map<String, Long> dp) {
        if (i >= nums.length) {
            return c;
        }

        String key = i + "-" + c;
        if (dp.containsKey(key)) {
            return dp.get(key);
        }

        long n1 = solve(nums, i + 1, c * nums[i], dp);
        long n2 = solve(nums, i + 1, nums[i], dp);

        long val = Math.max(Math.max(n1, n2), c);
        dp.put(key, val);
        return val;
    }

    public int maxProduct(int[] nums) {
        Map<String, Long> dp = new HashMap<>();
        long result = solve(nums, 1, nums[0], dp);
        if (result > Integer.MAX_VALUE) {
            return 1000000000;
        } else if (result < Integer.MIN_VALUE) {
            return -1000000000;
        } else {
            return (int) result;
        }
    }
}
