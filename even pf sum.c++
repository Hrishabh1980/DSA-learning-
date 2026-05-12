#include <iostream>

int main()
{
    int n =arr.size();
    for(int i =0;i<n;i++){
        if(arr[i]%2==0){
            arr[i]=1;
            
        }
        else{
            arr[i]=0;
        }
    }
    vector<int>&ps(N,0);
    ps[0]=arr[0];
    for(int i=1;i<n;i++){
        ps[i]=ps[i-1]+arr[i]
    }
    int Q=Qmat.size();
    for(int i=0;i<Q;i++){
        int s=Qmat[i][0],e=Qmat[i][1];
        if(s==0){
            cout<<ps[e];
            
        }
        else{
            cout<<ps[e]-ps[s-1];
        }
    }

    return 0;
}

