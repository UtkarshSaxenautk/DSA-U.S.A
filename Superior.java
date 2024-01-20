import java.util.*;

public class Superior {

    public static List<Integer> superiorElements(int[] a) {
        // Write your code here.
        List<Integer> ans = new ArrayList<Integer>();
        int temp = Integer.MIN_VALUE;
        for (int i = a.length - 1; i >= 0; i--) {
            if (temp < a[i]) {
                ans.add(a[i]);
                temp = a[i];
            }
        }
        Collections.sort(ans);
        return ans;

    }

}
