#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m, j;
    cin >> n >> m >> j;
    if(j == 1){
        for(int i = ceil(sqrt(n)); i <= sqrt(m); i++){
            cout << pow(i,2) << " ";
        }
    }
    else if(j == -1){
        for(int i = sqrt(m); i >= sqrt(n); i--){
            cout << pow(i,2) << " ";
        }
    }
}