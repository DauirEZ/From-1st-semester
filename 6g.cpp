/*#include <bits/stdc++.h>
using namespace std;
int Yes(){
	string n;
	getline(cin, n);
for(int i(0); i<n.length(); i++){
        if(n[i]!='A' && n[i]!='a' && n[i]!='o' && n[i]!='O' && n[i]!='U' && n[i]!='u' && n[i]!='E' && n[i]!='e' && n[i]!='I' && n[i]!='i'&& n[i]!='y' && n[i]!='Y'){
		 cout<<n[i];
		 }
    }

}

int main(){
	Yes();
}*/
#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;
void replace(){
    string s;
    getline(cin, s);
    for(int i = 0; i < s.length(); i++){
        if((s[i] != 'A') && (s[i] != 'a' ) && (s[i] != 'E') && (s[i] != 'e') && (s[i] !=  'I') && (s[i] != 'i') && (s[i] != 'O') && (s[i] != 'o') && (s[i] != 'U') && (s[i] != 'u') ){
            cout << s[i];
    }
}}
int main(){
    replace();
}
