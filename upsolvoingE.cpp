#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long int n, k=0, b=0, maxb=-113123121,c=0,  q;
    cin>>n;
    q=n;
    while(n>10){
        k+=n%10;
        n=n/10;
    }
    while(q>0){
        c++;
        q=q/10;
    }
    for(int i=0; i<=c; i++){
        b=pow(10,i);
        if(maxb<b){
            maxb=b;
        }
    }
    if((n%maxb)==(k%10)){
        cout<<"YES";
    }
    else cout<<"NO";
    /*cout<<k<<endl;
    cout<<b<<endl;
    cout<<maxb;*/
}