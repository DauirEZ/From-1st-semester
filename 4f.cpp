#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
    int n, max=-1000000, index1=0, index2=0;
    cin >>n;
    int z[n][n];
    for(int i=0;i<n; i++){
        for(int b=0; b<n; b++){
            cin>>z[i][b];
            if(i==0 && b==0 || z[i][b]>max){
                max = z[i][b];
                index1 =i;
                index2=b;
            }
        }
    }
    cout << ++index1 << " "<<++index2;
}