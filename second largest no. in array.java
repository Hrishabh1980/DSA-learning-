public class second_largest_no_in_array {
    public static void main(String[] args) {
        int[] arr = {2, 3, 1, 4, 5};
        int largest = Integer.MIN_VALUE;
        int secondLargest = Integer.MIN_VALUE;

        for (int i = 0; i < arr.length; i++) {
            if (arr[i] > largest) {
                secondLargest = largest;
                largest = arr[i];
            } else if (arr[i] > secondLargest && arr[i] != largest) {
                secondLargest = arr[i];
            }
        }

        if (secondLargest != Integer.MIN_VALUE) {
            System.out.println("Second largest number is: " + secondLargest);
        } else {
            System.out.println("No second largest number found.");
        }
    }
}
