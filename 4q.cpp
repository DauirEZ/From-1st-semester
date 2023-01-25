#include <iostream>
using namespace std;
int main(){
    int n, i, j;
    cin >> n;
    int m=(n-1)*2+1;
    string z[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            z[i][j]='.';
        }
    }
     for(i = 0; i < n; i++){
        for(j = 0; j < m; j++){
            for(int c = m/2 - i; c < m/2 + i + 1; c++){
                z[i][c] = '*';
            }
            cout<<z[i][j];
        }
        cout<<endl;
     }
}