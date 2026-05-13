#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "Hellofytdy higjhfjh khgg world";
    int n = s.length();

    int ans = 0;
    int leng = 0;

    for(int i = 0; i < n; i++){
        if(s[i] == ' '){
            if(leng > ans){
                ans = leng;
            }
            leng = 0;
        }
        else{
            leng++;
        }
    }
