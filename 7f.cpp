#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void ggwp(){
    int k=0;
    string s;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(int(s[i]-48)%2==0){
        k++;
        }
    }
    cout<<k;
}
int main(){
    ggwp();
}