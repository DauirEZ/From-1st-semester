#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, max=-2000000000, pmax=-2000000000;
    cin >> n;
    int z[n*n];
    for(int i=0; i<n*n; i++){
        cin >> z[i];
    }
    for(int i=0; i<n*n; i++){
        if(z[i]>max){
            pmax=max;
            max = z[i];
        }
        
        else if(z[i] > pmax && z[i] != max){
            pmax=z[i];
        }
        
    }
    if(pmax==-2000000000){
        cout<< 0;
    }
    else{
        cout<<pmax;
    }
}
