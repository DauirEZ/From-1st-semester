#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> lul(n);
    for(int i=0; i<n; i++){
        cin>>lul[i];
    }
    int k,a;
    cin>>k>>a;
    lul.insert(lul.begin()+k, a);
    for(int i=0; i<lul.size(); i++){
        cout<<lul[i]<<" ";
    }
}

