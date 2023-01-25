#include <iostream>
#include <cmath>
using namespace std;
int ggwp(){
    bool p=false;
    int n;
    cin>>n;
    for(int i=0; i<64; i++){
        if(n==pow(2,i)){
            p=true;
            break;
        }
        else p=false;
    }
    if(p==true){
        cout<<"Yes";
    }
    else if (p==false)
    cout<<"No";
}
int main(){
    ggwp();
}