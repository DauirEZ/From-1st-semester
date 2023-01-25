#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){
    int n,k,j,s=0;
    cin>>n;
    vector <int> q(n);
    for(int i=0; i<n; i++){
        cin>>q[i];
    }
    cin>>k>>j;
    int c=j-k;
    
    for(int i=k; i<=j; i++){
        q.erase(q.begin()+k);
    }
    for(int i=0; i<q.size(); i++){
        
        cout<<q[i]<<" ";
    }
}