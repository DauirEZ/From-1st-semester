#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> q;
    int n,j,h;
    cin>>n;
    int k[n];
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    cin>>j>>h;
    for(int i=0; i<j; i++){
        q.push_back(k[i]);
    }
    for(int i=h; i>=j; i--){
        q.push_back(k[i]);
    }
    for(int i=h+1; i<=n; i++){
        q.push_back(k[i]);
    }
    for(int i=0; i<n; i++){
        cout<<q[i]<<" ";
    }
}