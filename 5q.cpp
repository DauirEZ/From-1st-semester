#include <bits/stdc++.h>

using namespace std;

int main(){
string x, dub;
cin >> x >> dub;
float m = dub.size();
float k = x.size();

if(ceil(m/k) == m/k){
    string y;
    for(int i = 0; i < m/k; i++){
        y.append(x);
    }
            
    if(y == dub){
        cout << "YES";
    
    }
    else{
        cout << "NO";
    }

}
else{
    cout << "NO";
}
}