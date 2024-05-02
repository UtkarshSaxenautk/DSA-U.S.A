public class RecursiveBubble {

    public class Solution {
        public static void bubbleSort(int[] arr, int n) {
            // Your code goes here
            if (n == 1)
                return;
            int count = 0;
            for (int i = 0; i < n - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                    count++;
                }
            }
            if (count == 0)
                return;
            bubbleSort(arr, n - 1);
        }

    }
}
