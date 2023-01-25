#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int fibn(int n){
	if(n == 0) return 1;
	else if(n==1) return 1;
	else if(n == 2) return 1;
	return fibn(n-1) + fibn(n-2); 
}

int main(){
	int n;
	cin>>n;
	cout << fibn(n);
}
