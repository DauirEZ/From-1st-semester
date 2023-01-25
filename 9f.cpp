#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[0]==')' || s[s.length()-1]=='('){
            cout<<"NO";
            return 0;
        }
    }
    int k=0, j=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == '('){
            k++;
        }
        else if(s[i]==')'){
            j++;
        }
    }
    if(k==j){
        cout<<"YES";
    }
    else cout<<"NO";
}