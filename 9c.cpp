#include <bits/stdc++.h>
using namespace std;

 
int main()
{
    int n, k=0;
    cin>>n;
    map <int, int> m;

    for(int i=0; i<n; i++){
        int z; cin>>z;
        m[z]++;
    }
    map <int, int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++){
        if(it->second>=2){
            k++;
        }
    }
    cout<<k;
}
