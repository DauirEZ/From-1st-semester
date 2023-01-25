#include <iostream>
using namespace std;
int main(){
     int n, z, k=0;
    cin >> n;
    for (int i=1; i<=n; i++ ){
        cin >> z;
        if (z%10 ==7) k++;
    }
    cout << k;
}