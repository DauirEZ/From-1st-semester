#include <iostream>
using namespace std;
int main(){
    int n, m, sum, min=0, ind=0;
    cin >> n >> m;
    int z[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> z[i][j];
        } 
    }
   
    for(int i=0; i<m; i++){
        min += z[0][i];
    }
    
    //cout << min << endl;
    for(int i=0; i<n; i++){ 
        sum=0;
        for(int j=0; j<m; j++){
            sum +=z[i][j];
        } 
        if(min > sum){
            min = sum;
            ind = i;
        }
       // cout << min << " " << i << endl; 
    }
    cout<<ind+1;
}




