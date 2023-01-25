#include <iostream>
#include <deque>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int n, k = 0;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(find(v.begin(), v.end(),v[i]^v[j])!=v.end()){
            k++;
            }
        }
    }
    cout << k;

}