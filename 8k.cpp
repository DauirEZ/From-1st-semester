#include <bits/stdc++.h>
using namespace std;
int main(){
int n, s=0;
cin>>n;
vector <int> v(n);
for(int i=0; i<n; i++){
    cin>>v[i];
}
int k;
cin>>k;
sort(v.begin(), v.end(), greater<int>());
for(int i=0; i<k; i++){
    s+=v[i];
}
cout<<s;
}

