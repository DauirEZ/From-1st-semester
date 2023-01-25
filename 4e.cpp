#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    string b= "[*]";
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        for(int j=0; j<i+1;j++ ){
            cout<<b;
        }
    cout << endl;
    }
}