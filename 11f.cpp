#include <iostream>

using namespace std;

int main(){
    int a,b,k;
    cin >> a >> b >> k;
    int cnt = 0;
    int i = b+1;
    while(i--){
        if(a%i==0 && b%i==0){
            cnt++;
        }if (cnt==k){
            cout << i;
            break;
        }
    }
}