#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n, k, index=0;
    cin >> n >> k;
    int z[n];
    bool t=false;
    for(int i=0; i<n; i++){
        cin >> z[i];
    }
    for(int i=0; i<n; i++){
        if(z[i]==k){
           index =i; 
           t=true;
        }
    }
    if(t){
        cout << index+1;
    }
    else  {
        z[n]=k;
        sort(z, z+(n+1));
        for(int i=0; i<n+2; i++){
            if(z[i]==k){
           index =i; 
        }
        }
        cout<<index;
    } 

}