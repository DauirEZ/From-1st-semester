#include <bits/stdc++.h>
using namespace std;
int Yes(){
	int n=0, k;
	string s;
	cin>>s>>k;
	for(int i=0; i<s.length(); i++){
		if(s[i]>=48 && s[i]<=57){
			n++;
		}
	}
	if(n>=k){
		cout<<"YES";
	}
	else cout<<"NO";
	
}
int main(){
	Yes();
}
