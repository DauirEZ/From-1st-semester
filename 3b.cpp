#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, z, c=0;
    cin >> n;
    for (int i=1; i<=n; i++){
        cin >> z;
        if(z>0){
        c+=1;
        }
    }
    cout <<c;
}