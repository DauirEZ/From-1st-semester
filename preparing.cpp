#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    string n,k;
    cin>>n>>k;
    int c=0, b=0;
    for(int i=0; i<n.length(); i++){c=0;
        for(int j=0; j<k.length(); j++){
            if(k[j]==n[i])
            c++;
            
    }
    }
    for(int j=0; j<k.length(); j++){
        for(int i=0; i<n.length(); i++){
    if(j==i && k[j]==n[i]){
        b=b;
    }
    
}
}

cout<<c<<" "<<b;
}