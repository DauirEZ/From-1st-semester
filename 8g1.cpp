#include <bits/stdc++.h>
using namespace std;

int isPrime(int n,int s,vector <int> v){
   int c = 0;
   for (int i=0;i<n;i++){
   for (int j=2;j<=v[i];j++){
    if(j==v[i] && v[i]>=s){
        c++;
    }if(v[i]%j==0){
        break;
}}}
return c;
}

int main (){
    int n; cin >> n;
    vector <int> ve(n);
    for (int i=0;i<n;i++){
        cin >> ve[i];
    }
    int k; cin >> k;
    cout << isPrime(n,k,ve);
}