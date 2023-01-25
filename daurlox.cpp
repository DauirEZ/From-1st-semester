#include <iostream>
using namespace std;
int main(){
	int n, k, at = 5;
	cin >> n;
	while(at != 0){
		cin >> k;
		if(k == n){
			cout << "JALIL LOX" << endl;
			break;
		}
		at--;
		cout << at << " left" << endl;
	}
}
