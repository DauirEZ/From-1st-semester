#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void KK(){
	int max=-1213154;
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if(int(s[i])-48>max){
			max=int(s[i])-48;
		}
	}
	cout<<max;
}
int main(){
	KK();
}
