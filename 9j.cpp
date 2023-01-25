#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    string s;
    map<string, int> m;
    for(int i=0; i<n; i++){
        cin>>s>>x;
        m[s]+=x;
    }
    for(auto it=m.begin(); it!=m.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
}