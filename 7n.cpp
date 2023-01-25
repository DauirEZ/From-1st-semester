#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
using namespace std;
void lo(){
	bool p=false;
    int n,c;
    cin>>n>>c;
    int z[n];
    for(int i=0; i<n; i++){
        cin>>z[i];
    }
    sort(z, z+n);
    for(int i=0; i<n-1; i++){
        if((z[i+1]-z[i])<c){
        	p = false;
            break;
        }
        else {
            p=true;
        }
    }
    if(p==true){
        cout<<"no";
    }
    else if(p==false){
        cout<<"cheater";
    }
}
int main(){
    lo();
}
