#include <iostream>

int main()
{
   int leader(std::vector<int>&v){
       int c =1;
       int MR=v(n-1);
       int n =v.size();
       for(int i=n-2;i>0;i--){
           if(v[i]>MR){
               c++;
               MR=v[i];
           }
       }
   }

    return 0;
}
