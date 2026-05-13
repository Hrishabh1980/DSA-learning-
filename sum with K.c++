#include <iostream>

int main()
{
   int n=arr.size();
   int i=0;j=k-1;
   long s=0, ans =INT_MIN;
   for(int k=i;i<j;k++){
       s=s+arr[k];
       
   }
   if(s>ans){
       ans=s;
   }
   i=1;j=k;
   
   while(j<n){
       if(s>ans){
           ans=s;
       }
       i++;j++;
        
   }
   

    return ans;
}
