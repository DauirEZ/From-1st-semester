#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
    int n,m=-123212323, s=12131351;
    cin>>n;
        while(n!=0){
        if(m<n%10)
        m=n%10;
        if(s>n%10)
        s=n%10;
        n=n/10;
        }
    
    cout<<m<<" "<<s;
    
}