#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n; cin >> n; int a[n];
	for(int i = 0; i < n; i++){
		
		cin >> a[i];
	}
	sort(a, a+n);
	int cur;
	for(int i = n; i > 0; i--){
			cur = a[i];
		if(cur != a[i]){
		
			cout << cur << " ";
		}
	  
	}
}
