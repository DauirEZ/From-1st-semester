#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n, k, c;
    cin >> n >> k;
    if (n > k){
    c = round ((n/k)*2);
    cout << c;
    }
    else if (n<=k){
        cout << 2;
    }
}
