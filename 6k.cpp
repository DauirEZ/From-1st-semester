#include <bits/stdc++.h>
using namespace std;
int Yes(){
	int n, s=0;
	cin>>n;
	while(n>0){
		s+=n%10;
		n=n/10;
	}
	cout<<s;
}
int main(){
	Yes();
}
