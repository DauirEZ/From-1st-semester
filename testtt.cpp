/*#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	string s;
	for(int i=0; i<n; i++){
		cin>>s;
	}
	int k;
	cin>>k;
	map<string, string> m;
	for(int i=0; i<k; i++){
		string h, g;
		cin>>h>>g;
		m.insert(make_pair(h,g));
	}
	string j;
	cin>>j;
	for(auto it=m.begin(); it!=m.end(); it++){
		if(it->second == j){
			cout<<it->first<<" ";
		}
		else if(it->first == j){
			cout<< it->second<<" ";
		}
	}
}*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int k=0;
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if(s[i]>=65 && s[i]<=90){
			k+=1;
			if(s[i+1]>=97 && s[i+1]<=122){
				k+=2;
			}
		}
	}
	if(k>=3){
		cout<<"Found a match!";
	}
	else cout<<"Not matched!";
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int k=0;
	string s;
	cin>>s;
	for(int i=0; i<s.length(); i++){
		if(s[i]>=65 && s[i]<=90) {
			k+=1;
			if (s[i+1]>=97 && s[i]<=122){
				k+=2;
				|| (s[i] = 95) || (s[i]>=48 && s[i]<=57)
			}
		}
	}
	if(k>0){
		cout<<"Found a match!";
	}
	else cout<<"Not matched!";
	}*/
/*#include <bits/stdc++.h>
	using namespace std;
	int main(){
		int n;
		cin>>n;
		int z[n];
		for(int i=0; i<n; i++){
			cin>>z[i];
		}
		vector <int> v;
		for(int i=0; i<n; i++){
		int j;
		for(j=0; j<i; j++)
			if(z[i]==z[j])
			break;
			if(i==j)
			v.push_back(z[i]);
		}
		sort(v.begin(), v.end());
		for(int i=0; i<v.size(); i++){
			cout<<i+1<<" "<<v[i]<<endl;
		}
	}*/
	/*#include <bits/stdc++.h>
	using namespace std;
	int main(){ 
		int n;
		cin>>n;
		int a[n][n];
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin>>a[i][j];
			}
		}
	for (int i = 0; i < n / 2; i++) {
        for (int j = i; j < n - i - 1; j++) {
            int temp = a[i][j];
            a[i][j] = a[n - 1 - j][i];
            a[n - 1 - j][i] = a[n - 1 - i][n - 1 - j];
            a[n - 1 - i][n - 1 - j] = a[j][n - 1 - i];
            a[j][n - 1 - i] = temp;
        }
    }

	}*/
/*#include <bits/stdc++.h>
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
     while(z[j-1]>=z[j]){
      k++;
      j--;
     }
     cout<<k;
    }
   }

  }
  
 }*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k=0;
	cin>>n;
	int z[n];
	for(int i=0; i<n; i++){
		cin>>z[i];
	}
	for(int i=0; i<n; i++){
		int j;
		for(j=0; j<i; j++)
		if(z[i]==z[j])
		break;
		if(i==j)
		k++;
	}
	cout<<k;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	bool p = true;
	int n, i;
	cin>>n;
	for(i=2; i<sqrt(abs(n)); i++){
		if(n%i==0){
			p=false;
			break;
		}
	}
	if(p==true){
		cout<<"Prime";
	}
	else cout<<"Not Prime";
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k=0;
	cin>>n;
	int z[n];
	for(int i=0; i<n; i++){
		cin>>z[i];
	}
	cout<<"NO"<<endl;
	for(int i=1; i<n; i++){ k=0;
		for(int j=0; j<i; j++){
			if(z[i]==z[j]){
				k++;
			}
		}
		if(k>0){
			cout<<"YES"<<endl;
		}
		else cout<<"NO"<<endl;
	}
}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	char k,l;
	int f=0, s=0;
	for(int i=0; i<15; i++){
		cin>>k>>l;
		if(k == 'P' && l == 'S'){
			s++;
		}
		else if(k == 'S' && l == 'P'){
			f++;
		}
		else if(k == 'S' && l == 'R'){
			s++;
		}
		else if(k == 'R' && l == 'S'){
			f++;
		}
		else if(k == 'R' && l == 'P'){
			s++;
		}
		else if(k == 'P' && l == 'R'){
			f++;
		}
		else if(k == l){
			f++;
			s++;
		}
	}
	if(f>s){
		cout<<"first won";
	}
	else if(f<s){
		cout<<"Second won";
	}
	else if(f==s){
		cout<<"Friendship";
	}
}