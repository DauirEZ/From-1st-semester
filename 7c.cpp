#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
	int n;
	cin>>n;
	int z[n];
	for(int i=0; i<n; i++){
		cin>>z[i];
	}
	int t, mid;
	cin>>t;
	bool fuck=false;
	sort(z, z+n);
	int b=0,c=n-1;
	while(t!=z[mid] or b<=c){
		mid=(b+c)/2;
		if(t==z[mid]){
			fuck = true;
			break;
		}
		else if(t>z[mid]){
			b=mid+1;
		}
		else if(t<z[mid]){
			c=mid-1;
		}
		
	}
	if (fuck) cout<<"YES";
	else cout<<"NO";
}
