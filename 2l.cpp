#include <iostream>
#include <cmath>
using namespace std;
int main(){
    bool p=false;
    int n,i=2, k=0;
    cin>>n;
    while(p!=true){
       if(pow(i,k)<=n){
        cout<<pow(i,k) << " ";
        k++;
       }
       else p=true;
    }
}