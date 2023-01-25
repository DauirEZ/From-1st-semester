/*#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    string s, k;
    cin>>s>>k;
    for(int i=0; i<s.length(); i++){
    	for(int j=0; j<k.length(); j++){
    		if(((s[i]>=65)&&(s[i]<=90) || (s[i]>=97)&&(s[i]<=122))  && ((k[j]>=65)&&(k[j]<=90) || (k[j]>=97)&&(k[j]<=122)) ){
    			if((s[i]==90) || (k[j]==90 )){
    				s[i]='A';
    				k[j]='A';
				}
				else if((s[i]==122) || (k[j]==122 )){
					s[i]='a';
    				k[j]='a';
				}
				else {
				
    			s[i]=char(int(s[i]+1));
    			k[j]=char(int(k[j]+1));
			}
			
		}
		else {
			s[i]=s[i];
			k[j]=k[j];
		}
		}
	}
	cout<<s<<" "<<k;
    
}*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
 string n; 
 getline(cin, n);
 char k;
 for(int i = 0; i < n.size(); i++){
  if((65 <= n[i] and n[i] <= 90) or (97 <= n[i] and n[i] <= 122)){
  	if(n[i]=='z'){
		n[i]=96;
	  }
	else if(n[i]=='Z'){
		n[i]=64;
	}
   k = n[i] + 1;
   cout << k;
   
  }
  else{
   k = n[i];
   cout << k;
  }
 }
}
