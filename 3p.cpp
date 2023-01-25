#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x;
    cin >> x;
    if (ceil(sqrt(x)) > sqrt(x)){
        cout<<"No";
    }
    else cout<<"Yes";
}