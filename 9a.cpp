#include <bits/stdc++.h>
using namespace std;
 
int main(){
    multiset <pair<int , int>> tp; 
    int n;
    cin>>n;
    
    for(int i=0; i<n; i++){
        int x, y; cin>>x>>y;
        tp.insert(make_pair(x,y));

    }
    for(auto l: tp){
        cout<<l.first<<" "<<l.second<<endl;
    }
}