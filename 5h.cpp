#include <bits/stdc++.h>
using namespace std;

int main(){
    string str, t; cin >> str;
    int cnt = 0;
    string stri = "";
    for (int i = 0; i < str.size(); i++){
        for (int j = 0; j < str.size(); j++){
            if (str[i] == str[j]) cnt++;
        }
        stri += (cnt+'0');
        cnt = 0;
    }
    reverse(stri.begin(), stri.end());
    if (t == stri) cout << "YES";
    else cout << "NO";
}