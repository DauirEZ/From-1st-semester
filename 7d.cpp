#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/*int ggwp(){
    unsigned long long int n,k=0;
    cin>>n;
    while(n>0){
        k+=n%10;
        n=n/10;
    }
    cout<<k;
}*/

void ggwp(){
    int k=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]>= 48 && s[i]<=57){
            k+=int(s[i]-48);
        }
    }
    cout<<k;
}
int main(){
    ggwp();
}