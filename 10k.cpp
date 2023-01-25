#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
bool isPrime(int n){
    if(n == 0 || abs(n) == 1){
        return false;
    }
    else{
        for (int i = 2; i <= abs(n) / 2 ; i++)
        if (abs(n) % i == 0)
            return false;
    return true;
    }
}
int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    int cnt = count_if(v.begin(), v.end(), isPrime);
    cout << cnt;
}