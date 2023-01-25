#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<string, double>m;
	int sum=0;
	for(int i=0;i<n;i++) {
		int t;
		cin >> t;
		for(int j=0;j<t;j++) {
			string s;
			int x;
			cin >> s >> x;
			m[s]+=x;
			sum+=x;
		}
	}
	map<string, double>::iterator it;
	for(it=m.begin();it!=m.end();it++) {
		cout << it->first << " " << (it->second*100)/sum << endl;
	}
}