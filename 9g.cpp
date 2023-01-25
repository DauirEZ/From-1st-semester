#include <iostream>
#include <stack>
#include <deque>
using namespace std;
int main(){
    string s;
    cin >> s;
    deque <char> l;
    int n = s.length();
    l.push_back(s[0]);
    for(int i = 1; i < n; i++){
        if(l.empty()){
            l.push_back(s[i]);
        }
        else if(l.back() == '1'){
            if(s[i] == '0'){
                l.push_back(s[i]);
            }
            else if(s[i] == '1'){
                l.pop_back();
            }
        }
        else if(l.back() == '0'){
            l.push_back(s[i]);
        }
    }
    for (auto it = l.begin(); it != l.end(); ++it)
        cout << *it;
}