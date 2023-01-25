#include <bits/stdc++.h>
using namespace std;

long long pw(){
    static int i = -1;
    i++;
    return powl(i, i);
}

int main(){

    int n; cin >> n;
    vector <long long> v(n + 1);
    generate(v.begin(), v.end(), pw);
    vector<long long>::iterator it;
    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}