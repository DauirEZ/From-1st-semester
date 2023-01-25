#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long int n, z, s= -10000000;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >>z;
        if(z > s) s = z;
    }
    cout << s;
}