public class LongestSubarrayWithSumK {
    public static int longestSubarrayWithSumK(int[] a, long k) {
        // Write your code here
        int left = 0, right = 0;
        long sum = a[0];

        int ans = 0;

        int n = a.length;

        while (right < n) {

            while (left <= right && sum > k) {

                sum -= a[left];

                left++;

            }

            if (sum == k) {

                ans = Math.max(ans, right - left + 1);

            }

            right++;

            if (right < n) {

                sum += a[right];

            }

        }

        return ans;
    }
}
