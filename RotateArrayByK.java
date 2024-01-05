public class RotateArrayByK {
    public int[] Reverse(int[] nums, int low, int high) {
        while (low < high) {
            int temp = nums[low];
            nums[low] = nums[high];
            nums[high] = temp;
            low++;
            high--;
        }
        return nums;
    }

    public void rotate(int[] nums, int k) {

        int n = nums.length - 1;
        k = (k) % (n + 1);
        nums = Reverse(nums, 0, n - k);
        nums = Reverse(nums, n - k + 1, n);
        nums = Reverse(nums, 0, n);
        return;

    }
}
