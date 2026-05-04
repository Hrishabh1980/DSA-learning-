#include <iostream>
using namespace std;

int  sum(int a , int b){
    int sum = a+ b;
    return sum;
}

int main(){
    int x= sum(2,4);
    cout << "sum is " << x;
    return 0;
}