public class CeilAndFloor {
    public static int[] getFloorAndCeil(int[] a, int n, int x) {
        int low = 0;

        int high = n - 1;

        int ceiling = -1, floor = -1;

        if (x < a[0])
            return new int[] { -1, a[0] };

        if (x > a[n - 1])
            return new int[] { a[n - 1], -1 };

        while (low <= high)

        {

            int mid = low + ((high - low) / 2);

            if (a[mid] == x)

            {

                ceiling = a[mid];

                floor = a[mid];

                return new int[] { floor, ceiling };

            }

            else if (a[mid] <= x)

            {

                floor = a[mid];

                low = mid + 1;

            }

            else

            {

                ceiling = a[mid];

                high = mid - 1;
            }

        }

        return new int[] { floor, ceiling };
    }

}