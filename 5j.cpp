#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string x, y;

    cin >> x;

    for(int i = x.size() - 1; i >= 0; i--){
        y.push_back(x[i]);
    } 
    
    if(x == y){
        cout << "YES";
    }
    else{
    x.push_back(x[0]);
    string z;
    for(int i = x.size() - 1; i >= 0; i--){
        z.push_back(x[i]);
    }
    if(x == z){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    
    
    }
}