public class MissingAndRepeating {
    public static int[] findMissingRepeatingNumbers(int[] a) {
        // Write your code here
        int[] ans = new int[2];
        int n = a.length;
        for (int i = 0; i < n; i++) {
            int index = Math.abs(a[i]) - 1;
            a[index] = -a[index];
            if (a[index] > 0) {
                ans[0] = index + 1;
            }
        }

        for (int i = 0; i < n; i++) {
            if (a[i] > 0 && ans[0] != i + 1) {
                ans[1] = i + 1;
            }
        }
        return ans;
    }
}
