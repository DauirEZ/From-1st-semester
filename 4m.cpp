#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    int z[n][n];
    for(j=0; j<n; j++){
        z[0][j]=1;
        z[0][j]++;
    }
    for(i=0; i<n; i++){
        z[i][n]=0;
        z[i][n]+=z[0][n];
    }
    
    cout<<z[i][j];
}