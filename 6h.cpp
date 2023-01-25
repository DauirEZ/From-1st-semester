#include <bits/stdc++.h>
using namespace std;
int Yes(){
	bool p=false;
	string n;
	cin>>n;
	for(int i=0; i<n.length(); i++){
		if(n[i] %2 !=0){
		p=true;
		break;
	}
		else p=false;
	}
	if(p) cout<<"Not valid";
	else cout<<"Valid";
}
int main(){
	Yes();
}
