#include <bits/stdc++.h>
using namespace std;
int Lb(){
	int n;
	cin>>n;
	int a[n];
	bool p=false;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	int x; cin>>x;
	for(int i=0; i<n; i++){
		if(x==a[i]){
			p=true;
		}
	}
	if(p){
		cout<<"Yes";
	}
	else cout<<"No";
}
int main(){
	Lb();
}
