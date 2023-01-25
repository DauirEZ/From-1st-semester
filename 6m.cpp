#include <bits/stdc++.h>
using namespace std;
int Yes(){
	int n, i=0, c=0;
	cin>>n;
	int z[n];
	for(i=0; i<n; i++){
		cin>>z[i];
	}
	for(i=0; i<n; i++){
		cout<<z[n-i-1]<<" ";
	}
}
int main(){
	Yes();
}
