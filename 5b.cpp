#include <iostream>
#include <string>
using namespace std;
int main(){
    string n;
    cin>>n;
    for(int i=0; i<n.length(); i++){
            n[i]=toupper(n[i]);
            cout<<n[i];
        }
    }
