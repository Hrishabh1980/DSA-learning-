public class Main
{
	public static void main(String[] args) {
		
		int n=arr.length;
		int count = 0;
		int max=0;
		for(int i=0;i<n;i++){
		    if(arr[i]>max){
		        max=arr[i];
		        
		    }
		}
		for(int i =0;i<n;i++){
		    if(arr[i]!=max){
		        count++;
		    }
		}
		return count;
	}
}
