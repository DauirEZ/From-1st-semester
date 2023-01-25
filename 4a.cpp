#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >>n;
    int z[n*n];
    int l=-1121321231;
    for(int i=0; i<n*n; i++){
        cin>> z[i];
        if(z[i]>l)
        l = z[i];
    }
    cout<<l;
}