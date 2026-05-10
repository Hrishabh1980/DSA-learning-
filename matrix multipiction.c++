#include <iostream>

int main()
{
    int r1=a.size();
		int c1=a[0].size();
		int r2=b.size();
		int c2=b[0].size();
		vactor<vactor<int>R(r1,vector<int>(c2,0));
		for(int i=0;i<r1;i++){
		    for(int j =0;j<c2;j++){
		        int sum=0;
		        for(int k=0;k<c1;k++){
		            sum=sum+a[i][k]*b[k][j];
		        }
		        R[i][j]=sum;
		    }
		}
		

    return R;
}
