#include <iostream>
using namespace std;
int main(){
    int z, s=0;
    cin >> z;
    s +=z;
    while(cin.get() !='\n'){
        cin >>z;
        s+=z;
    }
    cout<<s;
}