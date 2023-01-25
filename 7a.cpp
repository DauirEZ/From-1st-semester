#include <iostream>
#include <cmath>
using namespace std;
string Genious(int n){
    if(n==0)return "0";
    if(n==1)return "1";
    return Genious(n/2) + char((n%2) + '0');
}
int main(){
    int n;
    cin>>n;
    cout<<Genious(n);
}