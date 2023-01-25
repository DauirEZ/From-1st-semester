#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int z[n][n];
    int i, j;
    int max=-1311231, indxr, indxc;
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            cin >> z[i][j];
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<=i; ++j){
        }
        if(z[i][i]>max){
                max=z[i][i];
                indxr=i;
                indxc=i;
            }
    }
    cout<<"Maximum element is: "<<max<<" "<<"with coordinates: "<<indxr+1<<";"<<indxc+1;
}