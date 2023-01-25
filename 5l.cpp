#include <bits/stdc++.h>

using namespace std;

int main(){
string x;
cin >> x;
string y = x;
sort(y.begin(), y.end());
if(x == y){
    cout << "YES";
}
else{
    cout << "NO";
}