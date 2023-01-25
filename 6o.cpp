#include <bits/stdc++.h>
using namespace std;
int Yes(){
	int n,b,k,s=0;
	cin>>n;
	for(int i=0; i<=1; i++){
		if(i==0){
			k=n%10;
		}
	}
	while(n>0){
		
		s+=n%10;
		n=n/10;
	}
	if(s%k==0){
		cout<<"Yes";
	}
	else cout<<"No";
}
int main(){
	Yes();
}
