#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> q;
    int n,k;
    cin>>n;
    int z[n];
    for(int i=0; i<n; i++){
        cin>>z[i];
        q.push_back(z[i]);
    }
    cin>>k;
    q.erase(q.begin()+k);
    for(int i=0; i<q.size(); i++){
       
       cout<<q[i]<<" ";
    }
}