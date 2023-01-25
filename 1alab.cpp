#include <iostream>
#include <cmath>
using namespace std;

/*int main(){
    int n, i;
    bool isPrime = true;
    cin>>n;
    for (i=2; i<=(sqrt(abs(n))); i++){
        if (n%i==0){
        isPrime = false;
        break;
        }
    }
    if(isPrime)
        cout<<"This is a prime number"<<endl;
    else
        cout<<"This is not a prime number"<<endl;
    return 0;
}*/
/*int main(){
    int n, k=0;
    cin>>n;
    int z[n];
    int max=-211112312;
    for(int i=0; i<n; i++){
        cin>>z[i];
    }
    for(int i=0; i<n; i++){
    if(max<z[i]){
        max=z[i];
    }
    }
    for(int i=0; i<n; i++){
        if(z[i]==max){
            k++;
        }
    }
    cout<<k;
}*/
int main(){
    int n, m, max=-123121132, k=0,l;
    cin>>n>>m;
    int z[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>z[i][j];
        }
    }
    for(int i=0; i<n; i++){
        k=0;
        for(int j=0; j<m; j++){
            if(z[i][j]>0){
                k++;
                
            }
        }
        if(max<k){
        max=k;
        l=i+1;
    }
    }
    cout<<l;
}