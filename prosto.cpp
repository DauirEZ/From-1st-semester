/*#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, s=0;
    cin>>n;
    int z[n][n];
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>z[i][j];
    }
    }
    for(int i=0; i<n; i++){
        s+=z[i][n-i-1];
    }
    cout<<s;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
int n, s=0;
    cin>>n;
    int z[n][n];
    for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>z[i][j];
    }
    }
    for(int i=0; i<n; i++){
        s+=z[i][i];
    }
    cout<<s;
}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k=0;
    cin>>n;
    int z[n];
    for(int i=0; i<n; i++){
        cin>>z[i];
    }
    cout<<"NO"<<endl;
    for(int i=1; i<n; i++){
        k=0;
        for(int j=0; j<i; j++){
            if(z[i]==z[j]){
                k++;
            }
        }
        if(k>0){
            cout<<"Yes"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    
}