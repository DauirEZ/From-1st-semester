#include <bits/stdc++.h>
using namespace std;
int Yes(){
	int n, m;
	cin>>n>>m;
	int z[n][m];
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			cin>>z[i][j];
		}
	}
	int b[m][n];
	for(int i=0; i<m; i++){
	for(int j=0; j<n; j++){
	b[i][j]=z[j][i];
		}
	}
	for(int j=0; j<m; j++){
	for(int i=0; i<n; i++){
		cout<<b[j][i]<<" ";
		}
		cout<<endl;
	}
}
	int main(){
		Yes();
	}
