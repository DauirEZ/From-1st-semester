#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    char k;
    for(int i=0; i<s.length(); i++){
        if(s[i]>=65 && s[i]<=90){
        if (s[i]+n>90){
            cout << char(s[i]-26+n);
        }else{
            cout << char(s[i]+n);
        }

    }
}
}