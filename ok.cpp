#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    int a, c, n, k=0;
    cin >>c >>a;
    int b[c][a];
    for(int i = 0; i < c; i++){
        for(int j = 0; j < a; j++){
        cin >> b[i][j];
        }
        }
    for(int i = 0; i < c; i++){
        for(int j = 0; j < a; j++){
            k += b[i][j];
        }
    cout<< k/a << " ";
    k = 0;
    }
}