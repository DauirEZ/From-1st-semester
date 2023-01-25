#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, k, d;
    cin>>n;
    int z[n];
    for(int i=0; i<n; i++){
        cin>>z[i];
    }
    for(int i=0; i<n; i++){
        if(z[i]%2==0){
            k=z[i];
            z[0]=k;
        }
        else if(z[i]%2!=0){
            d=z[i];
            cout<<d<<" ";
        }
    }
}