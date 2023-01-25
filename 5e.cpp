#include <bits/stdc++.h>
using namespace std;
int main(){
    string n;
    int a=0,b=0;
    cin>>n;
    for(int i=0; i<n.length(); i++){
        if(i%2==0){
            a++;
        }
        else if(i%2!=0){
            b++;
        }
    }
    if(a==b){
        cout<<"YES";
    }
    else cout<<"NO";
}