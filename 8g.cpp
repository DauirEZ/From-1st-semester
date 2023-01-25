#include <bits/stdc++.h>
using namespace std;
int a(int n){
    for (int i=2; i<=(sqrt(abs(n))); i++){
        if(a(ve[i]) && ve[i]>=k){
            j++;
        }
        if (n%i==0){
        break;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int z[n];
    vector <int> ve(n);
    for(int i=0; i<n; i++){
        cin>>z[i];
        ve.push_back(z[i]);
    }
    int k, j=0;
    cin>>k;
    for(int i=0; i<ve.size(); i++){
        
    }
    cout<<j;
}


