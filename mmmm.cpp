#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k=0;
    cin>>n;
    string s;
    vector <string> d;
    for(int i=0; i<n; i++){d="";
        cin>>s;
        d.push_back(s);
        reverse(d.begin(), d.end());
        if(d==s){
            k++;
        }
    }
    if(k!=0){
        cout<<k;
        
    }
    else cout<<0;
}