public class RemoveRepeated {
    public int removeDuplicates(int[] nums) {
        int prev = -101;
        int count = 0;
        for (int i = 0; i < nums.length; i++) {
            if (prev != nums[i]) {
                nums[count] = nums[i];
                count++;
                prev = nums[i];
            }
        }
        return count;
    }
}
