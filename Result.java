import java.util.*;

public class Result {
    public static int findMinNumbers(List<Integer> arr) {
        int n = arr.size();

        int[] cnt = new int[7];

        for (int i = 0; i < n; i++) {
            int num = arr.get(i);
            if (num == 1) {
                cnt[1]++;
            } else if (num == 2 && cnt[1] > 0) {
                cnt[1]--;
                cnt[2]++;
            } else if (num == 3 && cnt[2] > 0) {
                cnt[2]--;
                cnt[3]++;
            } else if (num == 4 && cnt[3] > 0) {
                cnt[3]--;
                cnt[4]++;
            } else if (num == 5 && cnt[4] > 0) {
                cnt[4]--;
                cnt[5]++;
            } else if (num == 6 && cnt[5] > 0) {
                cnt[5]--;
                cnt[6]++;
            }
        }

        int completeSubsequences = cnt[6];

        int totalUsed = completeSubsequences * 6;

        return n - totalUsed;
    }

    public static int minRemove(int[] arr, int n) {
        int[] cnt = new int[7];

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1) {
                cnt[1]++;
            } else if (arr[i] == 2 && cnt[1] > 0) {
                cnt[1]--;
                cnt[2]++;
            } else if (arr[i] == 3 && cnt[2] > 0) {
                cnt[2]--;
                cnt[3]++;
            } else if (arr[i] == 4 && cnt[3] > 0) {
                cnt[3]--;
                cnt[4]++;
            } else if (arr[i] == 5 && cnt[4] > 0) {
                cnt[4]--;
                cnt[5]++;
            } else if (arr[i] == 6 && cnt[5] > 0) {
                cnt[5]--;
                cnt[6]++;
            }
        }

        // Number of complete subsequences 1,2,3,4,5,6
        int completeSubsequences = cnt[6];

        // Total number of elements used in complete subsequences
        int totalUsed = completeSubsequences * 6;

        // The minimum number of elements to remove
        return n - totalUsed;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }

        System.out.println(minRemove(arr, n));
    }
}
