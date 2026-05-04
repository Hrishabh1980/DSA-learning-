public class Main
{
	public static void main(String[] args) {
	    
	 int arr [] ={ 2,3,4,5,7};
	 
	 
	 int max= 0;
	 int min =0;
	 int maxindex=0 ;
	 int minindex =0;
	 
	 for(int i =0;i<arr.length;i++){
	     if(arr[i]>max ){
	         max=arr[i];
	         maxindex=i;
	         
	     }
	     if(arr[i]<min){
	         min=arr[i];
	         minindex=i;
	         
	     }
	 }
	 System.out.println("max index is " +" "+ maxindex);
	 System.out.println("min index is "+" "+ minindex);
	 
	 
	 }
}
               