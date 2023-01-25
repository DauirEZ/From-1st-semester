#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >>n;
    int z[n];
    for(int i=0; i<n; i++){
        cin>>z[i];
    }
    int y;
    cin>>y;
    int b[y];
    for(int i=0; i<y; i++){
        cin >>b[i];
    }
    int q=n+y;
    int o[q];
    for(int i=0; i<n; i++){
        o[i]=z[i];
    }
    for(int i=0; i<y; i++){
        o[n+i]=b[i];
    }
    sort(o, o+q);
    for(int i=0; i<q; i++){
        cout<<o[i]<<" ";
    }
}