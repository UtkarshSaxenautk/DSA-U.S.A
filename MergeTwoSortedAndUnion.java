import java.util.ArrayList;
import java.util.List;

public class MergeTwoSortedAndUnion {
    public static List<Integer> sortedArray(int[] a, int[] b) {
        List<Integer> res = new ArrayList<>();
        int i = 0, j = 0, count = 0;

        while (i < a.length && j < b.length) {
            if (a[i] > b[j]) {
                if (count == 0 || res.get(count - 1) != b[j]) {
                    res.add(b[j]);
                    count++;
                }
                j++;
            } else if (a[i] < b[j]) {
                if (count == 0 || res.get(count - 1) != a[i]) {
                    res.add(a[i]);
                    count++;
                }
                i++;
            } else {
                if (count == 0 || res.get(count - 1) != a[i]) {
                    res.add(a[i]);
                    count++;
                }
                i++;
                j++;
            }
        }

        while (i < a.length) {
            if (count == 0 || a[i] != res.get(count - 1)) {
                res.add(a[i]);
                count++;
            } else {
                i++;
            }
        }

        while (j < b.length) {
            if (count == 0 || b[j] != res.get(count - 1)) {
                res.add(b[j]);
                count++;
            } else {
                j++;
            }
        }

        return res;
    }
}