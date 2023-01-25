#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, z, c=0;
    cin >> n;
    for (int i=1; i<=n; i++ ){
        cin >> z;
        while (z!=0){
            if(z%10==0)
            c++;
            z=z/10;
        }
    }
    cout<<c;
}