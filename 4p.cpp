#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int z[n][n];
    int i, j;
    long long int sum=0;
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> z[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
        }
        sum+=z[i][n-1-i];
    }
    cout<<sum;
}