#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, z, e = 0, o = 0;
    cin >> n;
    for (int i=1; i<=n; i++ ){
        cin >> z;
        if  (z%2 ==0) e++;
        else o++;
    }
    cout << e << " "<< o;
}