#include <iostream>
#include <cmath>
using namespace std;
int() {
	int n;
	cin >> n;
	int z[n];
	for (int i = 1; i <= n; i++) {
		cin >> z[i];
		sort(z[i]);
		cout << z[i] << " ";
	}
}