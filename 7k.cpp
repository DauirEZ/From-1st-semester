#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
void loh(){
    int k=0;
    string s,t;
    cin>>s;
    t=s;
    reverse(t.begin(), t.end());
    for(int i=0; i<s.length(); i++){
    if(s[i]==t[i]){
        k=1;
    }
    else k=0;
    }
    if(k==1){
        cout<<"Yes";
    }
    else if(k==0){
        cout<<"No";
    }
}
int main(){
    loh();
}