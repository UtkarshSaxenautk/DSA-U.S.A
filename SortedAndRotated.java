public class SortedAndRotated {

    public boolean check(int[] nums) {
        int n = nums.length;
        if (n == 1)
            return true;
        int possible = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                possible++;
            }
        }

        if (nums[n - 1] > nums[0]) {
            possible++;
        }
        return possible <= 1;
    }

}
