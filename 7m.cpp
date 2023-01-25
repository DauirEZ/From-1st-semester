#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
void smt(int n, int k=0){
	while(n>k){
		k++;
		cout<<k<<" ";
	}
}
int main(){
	int x,y=0;
	cin>>x;
	smt(x,y);
}
