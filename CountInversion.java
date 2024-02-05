import java.util.ArrayList;

public class CountInversion {
    private static int merge(int[] arr, int low, int mid, int high) {
        ArrayList<Integer> sorted = new ArrayList<>();
        int left = low;
        int right = mid + 1;

        int count = 0;

        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                sorted.add(arr[left]);
                left++;
            } else {
                sorted.add(arr[right]);
                count += (mid - left + 1);
                right++;
            }
        }

        while (left <= mid) {
            sorted.add(arr[left]);
            left++;
        }

        while (right <= high) {
            sorted.add(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = sorted.get(i - low);
        }
        return count;
    }

    public static int mergeSort(int[] arr, int low, int high) {
        int count = 0;
        if (low >= high)
            return count;
        int mid = (low + high) / 2;
        count += mergeSort(arr, low, mid);
        count += mergeSort(arr, mid + 1, high);
        count += merge(arr, low, mid, high);
        return count;
    }

    public static int numberOfInversions(int[] a, int n) {
        return mergeSort(a, 0, n - 1);
    }
}
