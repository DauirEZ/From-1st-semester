#include <bits/stdc++.h>
using namespace std;
int main(){
    int k=0;
    bool p=false;
    int n;
    cin>>n;
    int z[n];
    for(int i=0; i<n; i++){
        cin>>z[i];
    }
    for(int i=0; i<n; i++){
        int j;
        for(j=0; j<i; j++){
        if (z[i]==z[j]){
            k=0;
            break;
    }
        }
        if (i == j)
        k++;
    }
    if(k==0){
        cout<<"NO";
    }
    else {
cout<<"YES";
    } 
}