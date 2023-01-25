#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    char x;
    int n,k=0;
    cin>>s>>x>>n;
    for(int i=0; i<s.length(); i++){
        if(s[i]==x)
        k++;
    }
    if(k==n)
    cout<<"YES";
    else cout<<"NO";
    
}