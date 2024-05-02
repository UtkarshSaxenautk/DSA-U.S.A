public class RecursiveInsertionSort {
    public class Solution {
        public static void insertionSort(int[] arr, int size) {
            // Your code goes here
            if (size <= 1)
                return;
            insertionSort(arr, size - 1);
            int key = arr[size - 1];
            int j = size - 2;
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = key;
        }
    }
}
