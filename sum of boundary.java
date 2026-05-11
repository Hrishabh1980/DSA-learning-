public class Main {
    public static void main(String[] args) {

        int arr[][] = {{1,2,3,4}};
        
         int n = arr.length;
        int m = arr[0].length;

        int sum = 0;
            
            if(n == 1){
            for(int i=0;i<m;i++){
                sum += arr[0][i];
            }
        }

        // Case 2: only one column
        else if(m == 1){
            for(int i=0;i<n;i++){
                sum += arr[i][0];
            }
        }

        else{

        

       
       

        // Top row
        for(int i = 0; i < m; i++){
            sum += arr[0][i];
        }

        // Right column
        for(int i = 1; i < n; i++){
            sum += arr[i][m-1];
        }
       
        

        // Bottom row
        for(int i = m-2; i >= 0; i--){
            sum += arr[n-1][i];
        }
        

        // Left column
        for(int i = n-2; i > 0; i--){
            sum += arr[i][0];
        }
        }

        System.out.println("Sum of boundary elements = " + sum);
    }
}
