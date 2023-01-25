#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n, k, sum=0;
    cin >> n >> k;
    int z[n][k];
    for(int i=0; i<n; i++){
        for(int j=0; j<k; j++){
            cin >>z[i][j];
            if(z[i][j]<0){
                sum++;
            }
        }
    }
    cout<<sum;
}