import java.util.Arrays;
import java.util.Scanner;

public class AddEveGame {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        while (t-- > 0) {

            int size = scanner.nextInt();

            int[] numbers = new int[size];

            for (int i = 0; i < size; i++) {
                numbers[i] = scanner.nextInt();
            }

            Arrays.sort(numbers);

            if (canMakeEqual(numbers)) {
                System.out.println("Ada");
            } else {
                System.out.println("Eve");
            }
        }
    }

    // Function to check if Ada can make all numbers in the sorted collection equal
    private static boolean canMakeEqual(int[] numbers) {
        int n = numbers.length;
        int largest = numbers[n - 1];

        for (int i = 0; i < n - 1; i++) {
            if (numbers[i] == largest)
                return true;

            while (true) {
                int unitDigitSum = numbers[i] + numbers[i] % 10;

                if (unitDigitSum < largest) {
                    numbers[i] = unitDigitSum;
                    continue;
                } else if (unitDigitSum == largest) {
                    break;
                } else {
                    return false;
                }
            }
        }

        return true;
    }
}
