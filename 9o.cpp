#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n;
    vector <string> log;
    vector<string> pass;
    for(int i=0; i<n; i++){
        string login, password;
        cin>>login>>password;
        log.push_back(login);
        pass.push_back(password);
    }
    cin>>m;
    int k=0;
    for(int i=0; i<m; i++){
        string l, p;
        cin>>l>>p;
        if(find(log.begin(), log.end(), l)!=log.end()){
            k++;
        
        if(find(pass.begin(), pass.end(), p)!=pass.end()){
            k+=3;
        }
        }
    

    if(k==0){
        cout<<"login error" << endl;
    }
    if(k==1){
        cout<<"password error" << endl;
    }
    if(k==4){
        cout << "correct password" << endl;
    }
    k=0;
}
}