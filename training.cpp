#include <bits/stdc++.h>
using namespace std;
int main(){
    vector <int> k={122, 45465, 488, 66};
    vector<int> v={667,48,79,466,45};
    k.insert(k.begin()+2, 2, 50);
    for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }
    cout<<endl;

k.erase(k.begin()+2, k.begin()+4);
    for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }

cout<<endl;
k.resize(6, 666);
    for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }

cout<<endl;
k.swap(v);
for(int i=0; i<k.size(); i++){
        cout<<k[i]<<" ";
    }
}