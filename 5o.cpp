#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(max<s[i]){
            max=s[i];
        }
    }
    cout<<max;
}