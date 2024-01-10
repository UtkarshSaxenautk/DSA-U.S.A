import java.util.HashMap;

public class LongestSubarrayWithSumKWithNegative {
    public static int getLongestSubarray(int[] a, int k) {
        // Write your code here.
        int ans = 0;
        HashMap<Long, Integer> map = new HashMap<>();
        long sum = 0;

        for (int i = 0; i < a.length; i++) {
            sum += a[i];

            if (sum == k) {
                ans = Math.max(ans, i + 1);
            }

            long temp = sum - k;
            if (map.containsKey(temp)) {
                ans = Math.max(ans, i - map.get(temp));
            } else {
                // Only update the map if it doesn't contain the current sum
                if (!map.containsKey(sum)) {
                    map.put(sum, i);
                }
            }
        }

        return ans;
    }
}
