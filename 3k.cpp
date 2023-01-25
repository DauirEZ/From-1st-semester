#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int z[n];
    int current;
    for(int i=0; i<n; i++){
        cin >> z[i];
        if(z[i] != current){
            cout<<z[i]<<" ";
        }
        current = z[i];
    }
}