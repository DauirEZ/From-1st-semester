#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int n, j, k=1;
		cin>>n;
		int z[n];
		for(int i=0; i<n; i++){
			cin>>z[i];
		}
		for(int i=0; i<n; i++){
			if(i==n-1){
				if(z[i]>z[i-1]){
					cout<<1;
				}
				else{
					j=i;
					while(z[j-1]>z[j]){
						k++;
						j--;
					}
					cout<<k;
				}
			}

		}
	}