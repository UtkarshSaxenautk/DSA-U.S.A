public class LowerBound {

    public static int lowerBound(int[] arr, int n, int x) {
        // Write your code here
        int low = 0, high = n - 1;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] >= x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

}
