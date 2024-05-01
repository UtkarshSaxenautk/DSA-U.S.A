public class MergeSort {
    public class Solution {

        public static void merge(int[] arr, int l, int m, int r) {
            int n1 = m - l + 1;
            int n2 = r - m;
            int[] arr1 = new int[n1];
            int[] arr2 = new int[n2];
            for (int i = 0; i < n1; i++) {
                arr1[i] = arr[i + l];
            }
            for (int j = 0; j < n2; j++) {
                arr2[j] = arr[m + j + 1];
            }
            int i = 0, j = 0;
            int k = l;
            while (i < n1 && j < n2) {
                if (arr1[i] < arr2[j]) {
                    arr[k] = arr1[i];
                    i++;
                } else {
                    arr[k] = arr2[j];
                    j++;
                }
                k++;
            }
            while (i < n1) {
                arr[k] = arr1[i];
                i++;
                k++;
            }
            while (j < n2) {
                arr[k] = arr2[j];
                j++;
                k++;
            }
        }

        public static void mergeSort(int[] arr, int l, int r) {
            // Write your code here
            if (l < r) {
                int m = l + (r - l) / 2;
                mergeSort(arr, l, m);
                mergeSort(arr, m + 1, r);
                merge(arr, l, m, r);
            }
        }
    }

}
