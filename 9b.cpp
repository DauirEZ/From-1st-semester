#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    vector <int> o;
    vector <int> e;
    for(int i=0; i<n; i++){
        cin>>v[i];
        if(v[i]%2==0){
            e.push_back(v[i]);
        }
        else if(v[i]%2!=0){
            o.push_back(v[i]);
        }
    }
    sort(e.begin(), e.end());
    reverse(e.begin(), e.end());
    sort(o.begin(), o.end());
    for(int i=0; i<e.size(); i++){
        cout<<e[i]<<" ";
    }
    for(int i=0; i<o.size(); i++){
        cout<<o[i]<<" ";
}
}