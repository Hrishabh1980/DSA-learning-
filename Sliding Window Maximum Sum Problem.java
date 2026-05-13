public class Main {

    public static void main(String[] args) {

        int arr[] = {1,2,3,3,4,4,4,5,4,5};

        int k = 5;
        int n = arr.length;

        int sum = 0;

        for(int i = 0; i < k; i++) {
            sum += arr[i];
        }

        int max = sum;

        int i = 1;
        int j = k;

        while(j < n) {

            sum = sum - arr[i - 1] + arr[j];

            if(sum > max) {
                max = sum;
            }

            i++;
            j++;
        }

        System.out.println("Maximum sum is: " + max);
    }
}
