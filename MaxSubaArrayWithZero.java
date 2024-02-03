import java.util.HashMap;

public class MaxSubaArrayWithZero {
    public static int getLongestZeroSumSubarrayLength(int[] arr) {
        // Write your code here.
        HashMap<Integer, Integer> mp = new HashMap<>();
        int max = 0;
        int sum = 0;
        mp.put(0, -1);
        for (int i = 0; i < arr.length; i++) {
            sum += arr[i];
            if (mp.containsKey(sum)) {
                max = Math.max(max, i - mp.get(sum));
            } else {
                mp.put(sum, i);
            }
        }
        return max;
    }
}