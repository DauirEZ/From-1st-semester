#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, l, r;
    cin >> n >> l >> r;
    int z[n];
    for (int i=0; i<n; i++){
        cin >> z[i];
    }
    
    for (int i=0; i<l-1; i++){        
        cout << z[i] << " ";
    }

    for (int i=r-1; i>=l-1; i--){
        cout << z[i] << " ";

    }
    for (int i=r; i<n; i++){
        cout << z[i] << " ";
    }
}