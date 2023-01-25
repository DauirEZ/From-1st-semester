#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m, c, r, sum = 0;
        cin >> n >>m;
        int z[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> z[i][j];
            }
        }
        cout<<"coordinates of min elements:"<<endl;
        for(int i=0; i<m; i++){ 
            int min=1231321;
            for(int j=0; j<n; j++){
                
                if(min>z[j][i]){
                    min = z[j][i];
                    c = j;
                    r = i;
                }
                
            }         
        sum += min;
        cout<<c+1<<";"<<r+1<<endl;
        }
        cout<<endl;
        cout <<"Their sum:"<<endl;
        cout<< sum; 
}