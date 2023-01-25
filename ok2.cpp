#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, s=0;
    cin>>n;
    while(n>0){
        s++;
        if(s%2==0){
            n=n-4;
        }
        else if(s%7==0) 
        else n=n+3;
    }
    cout<<s;
}