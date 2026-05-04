public class Main
{
	public static void main(String[] args) {
	    
	    int arr []={1,2,3,4,5,6,6};
	    int n=arr.length;
	    int evensum=0;
	    int oddsum=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]%2==0){
	            evensum+=i;
	            
	        }
	        else{
	            oddsum+=i;
	            
	        }
	    }
	    System.out.println("sum of even is "+" "+ evensum);
	    System.out.println("sum of odd is "+" "+ oddsum);
	
	}
}
