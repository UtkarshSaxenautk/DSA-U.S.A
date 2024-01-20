import java.util.Arrays;

public class LargestConsecutive {

    public int longestConsecutive(int[] nums) {
        if (nums.length == 0) {
            return 0;
        }
        Arrays.sort(nums);
        int max = 0;
        int curr = 1;
        for (int i = 0; i < nums.length - 1; i++) {
            if (nums[i] == (nums[i + 1] - 1)) {
                curr++;
            } else if (nums[i] == nums[i + 1]) {
                continue;
            } else {
                max = Math.max(curr, max);
                curr = 1;
            }
        }
        max = Math.max(curr, max);
        return max;
    }

}
