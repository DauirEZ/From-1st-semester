#include <iostream>
#include <cmath>
using namespace std;
int L(){
    int y,k=0;
    string s;
    cin>>s;
    for(int i=0; i<s.size(); i++){
        if(s[i]>=48 && s[i]<=57){
            y=(int(s[i]-48)/2);
            k+=y;
        }
    }
    cout<<k;
}
int main(){
    L();
    }
    
