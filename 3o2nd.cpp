#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int z[n];
    for(int i=0; i<n; i++){
        cin >> z[i];
    }
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (z[j] > z[j + 1]){
                temp = z[j];
                z[j] = z[j + 1];
                z[j + 1] = temp;
            }
        }
    }
    for(int i=0; i<n; i++){
        cout << z[n-i-1] << " ";
    }
}