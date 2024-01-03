import java.util.Arrays;

public class SecondLargest {
    // time complexity: O(n)
    static int[] secondLargestElement(int[] arr, int n) {
        // Write your code here.
        int largest = arr[0];
        int secondLargest = Integer.MIN_VALUE;
        int smallest = arr[0];
        int secondSmallest = Integer.MAX_VALUE;
        for (int i = 1; i < n; i++) {

            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] < largest && secondLargest < arr[i]) {
                secondLargest = arr[i];
            }

            if (arr[i] < smallest) {
                secondSmallest = smallest;
                smallest = arr[i];
            } else if (arr[i] > smallest && arr[i] < secondSmallest) {
                secondSmallest = arr[i];
            }

        }
        int[] ans = new int[2];
        ans[0] = secondLargest;
        ans[1] = secondSmallest;
        return ans;

    }

    // time complexity O(nlogn)
    static int[] secondLargestElement2(int[] arr, int n) {
        Arrays.sort(arr);
        int[] ans = new int[2];
        ans[0] = arr[1];
        ans[1] = arr[n - 2];
        return ans;
    }
}
