#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> k;
    int n,p;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p;
        k.push_back(p);
    }
    reverse(k.begin(), k.end());
    for(int i=0; i<n; i++){
        cout<<k[i]<<" ";
    }
}