#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, max=-13123113, min=21311661;
    cin>>n;
    vector <int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<v.size(); i++){
        if(max<v[i]){
            max=v[i];
        }
    }
    for(int i=0; i<v.size(); i++){
        if(min>v[i]){
            min=v[i];
        }
    }
    cout<<max-min;
}