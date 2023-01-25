#include <iostream>
#include <algorithm>
#include <vector>      

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int>v;
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    rotate(v.begin(), v.begin()+m, v.end());
    reverse(v.begin(), v.end());
    vector<int>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}