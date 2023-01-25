#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    deque <string> d;
    string s;
    for(int i=0; i<n; i++){
        int x; 
        cin>>x;
        if(x==1){
            cin>>s;
            d.push_back(s);
        }
        else {
            d.pop_front();
        }
        if(d.empty()){
            cout<<"queue is empty"<<endl;
        }
        else {
            cout<<d.front()<<endl;
        }
    }
}