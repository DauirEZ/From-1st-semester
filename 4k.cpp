#include <iostream>
#include <cmath>
using namespace std;
    int main(){
        int n,m, i,j,sum;
        cin >> n >>m;
        int z[n][m];
        
        for(i=0; i<n; i++)
            for(j=0; j<m; j++)
            cin>>z[i][j];

    for(i=0; i<n; i++){ sum=0;
            for(j=0; j<m; j++)
                       sum+=z[i][j];
            cout<<"The sum of row number " << i+1 <<" is "<< sum << endl;
    }
    for(i=0; i<m; i++){ sum=0;
            for(j=0; j<n; j++)
                        sum+=z[j][i];
            cout<<"The sum of column number " << i+1 <<" is "<< sum<<endl;
    
    }
    }