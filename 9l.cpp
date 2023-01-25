#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a,b;
    multimap <int, int> m;
    for(int i=1; i<=n; i++){
        cin>>a>>b;
        m.insert(make_pair(a+b, i));
    }
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->second<<" ";
    }
}