import java.util.*;

public class Largest {

    // time complexity: O(n)
    static int largestElement(int[] arr, int n) {
        // Write your code here.
        int largest = arr[0];
        for (int i = 1; i < n; i++) {
            if (arr[i] > largest)
                largest = arr[i];

        }
        return largest;

    }

    // time complexity O(nlogn)
    static int largestElement2(int[] arr, int n) {
        Arrays.sort(arr);
        return arr[n - 1];
    }
}