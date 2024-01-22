public class MinReplacement {
    public static int helper(String row1, String row2) {
        int r1 = row1.length();
        int replace = 0;
        int[] countRow1 = new int[2];
        int[] countRow2 = new int[2];

        for (int i = 0; i < r1; i++) {

            if (row1.charAt(i) == 'R')
                countRow1[0]++;
            if (row1.charAt(i) == 'W')
                countRow1[1]++;

            if (row2.charAt(i) == 'R')
                countRow2[0]++;
            if (row2.charAt(i) == 'W')
                countRow2[1]++;
        }

        for (int i = 0; i < 2; i++) {
            int diff = Math.abs(countRow1[i] - countRow2[i]);
            if ((diff % 2) != 0) {
                return -1;
            }
            replace += diff / 2;
        }

        return replace;
    }

    public static void main(String[] args) {
        String row1_1 = "W?WR?";
        String row2_1 = "R??W?";
        System.out.println(helper(row1_1, row2_1));
        String row1_2 = "RR?";
        String row2_2 = "?R?";
        System.out.println(helper(row1_2, row2_2));

        String row1_3 = "R?R??";
        String row2_3 = "??W??";
        System.out.println(helper(row1_3, row2_3));
    }
}
