/*#include <bits/stdc++.h>
using namespace std;
int Deep(){
	int n;
	cin>>n;
	int k=0, c=0;
	int a[n], b[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n; i++){
		cin>>b[i];
	}
	for(int i=0; i<=n; i++){
		if(a[i]==b[i])
		k++;
		for(int j=i; j<=n; j++){
			if(b[j]==a[j+1])
			c++;
		}
	}
	cout<<k+c;
}
int main(){
	Deep();
}*/






#include <iostream>

using namespace std;

int a[10001], b[10001];

void precalc(){
    for(int i=0; i<=10000; i++){
        a[i] = b[i] = 0;
    }
}

int main(){
    precalc();
    int n, x, cnt = 0; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x; a[x]++;
    }
    for(int i=0; i<n; i++){
        cin >> x; b[x]++;
    }
    for(int i = 1; i <= 10001; i++){
        cnt += min(a[i], b[i]);
    }
    cout << cnt;
}

