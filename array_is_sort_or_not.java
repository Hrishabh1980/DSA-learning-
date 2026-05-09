public class Main
{
	public static void main(String[] args) {
		int arr[]={1,2,3,4,5,6};
		   int n=arr.length;
		   boolean sort =true;
		   for(int i=0;i<n-1;i++){
		       if(arr[i]>arr[i+1]){
		           sort = false ;
		           }
		       
		       
		   }
		   if(sort){
		   System.out.println("yes arr is short");
		   }
		   else{
		       System.out.println("not sort");
		   }
		
	}
}
