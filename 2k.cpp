#include<iostream>
#include<cmath>
using namespace std;
int main(){
    bool p=false;
    int n,i=1;
    cin>>n;
    while(p!=true){
       if(pow(i,2)<=n){
        cout<<pow(i,2)<<endl;
        i++;
       }
       else p=true;
    }
}

