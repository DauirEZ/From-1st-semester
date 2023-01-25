#include <iostream>
#include <string>
using namespace std;
int main(){
    int b=0, s=0;
    string n;
    cin>>n;
    for(int i=0; i<n.length(); i++){
        if(n[i]>='A' && 'Z'>=n[i]){
            b++;
        }
        else if(n[i]>='a' && n[i]<='z'){
            s++;
        }
    }
    cout<<s<<" "<<b;
}
