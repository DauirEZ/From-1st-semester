#include <iostream>
#include <string>
using namespace std;
int main(){
    int k=0;
    string n;
    cin>>n;
    for(int j=0; j<n.length(); j++){
        if(n[j]=='a' || n[j]=='e' || n[j]=='i' || n[j]=='o' || n[j]=='u'){
            k++;
        }
    }
    cout<<k;
}