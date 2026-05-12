#include <iostream>

int main()
{
   long ans=0;
   int n =arr.size();
   for(int i=0;i<n;i++){
       long s=(i+1),e=(n-1);
       long occ=s*e;
       ans=ans+arr[i]*occ;
       
   }

    return ans;
}
