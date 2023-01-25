#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    bool p=true;
    cin>>n;
    if(n == 0 || n ==1){
        p = false;
    
    }
    for(int i=2; i<=n/2; ++i){
        if(n%i==0){
            p=false;
        }
    }
    if(p){
        cout<<"Yes";
    }
    else cout<<"No";
}