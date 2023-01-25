#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, m,i,j;
    cin >> n >>m;
    int z[n][m];
    
    for(i=0; i<n; i++)
        for(j=0; j<m; j++)
            cin >> z[i][j];
            cout<<endl;
            
    for(i=0; i<n; i++)
           {
        for(j=0; j<m; j++)
        {
         if(round(sqrt(z[i][j])) == sqrt(z[i][j]))
        cout << sqrt(z[i][j])<<" ";
         else cout << z[i][j]<<" ";
        }
        cout<<endl;}
    }
