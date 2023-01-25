#include <bits/stdc++.h>
using namespace std;
int main(){
    map <string, int> m;
    int n;
    cin>>n;
    
    for(int i=1; i<=n; i++){
        string s; cin>>s;
        m.insert(make_pair(s,i));
    }
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<< it->first << " " << it-> second << endl;
    }
}