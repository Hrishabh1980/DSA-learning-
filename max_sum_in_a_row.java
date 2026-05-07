public class max_sum_in_a_row {
    public static void main(String[] args) {
        int arr[][] = {
            {1, 2, 3},
            {4, 5, 6}
        };
        int maxSum = 0;
        int rowIndex = -1;

        for (int i = 0; i < arr.length; i++) {
            int currentSum = 0;
            for (int j = 0; j < arr[i].length; j++) {
                currentSum += arr[i][j];
            }
            if (currentSum > maxSum) {
                maxSum = currentSum;
                rowIndex = i;
            }
        }

        System.out.println("Row with maximum sum is: " + rowIndex);
        System.out.println("Maximum sum is: " + maxSum);
    }
}
