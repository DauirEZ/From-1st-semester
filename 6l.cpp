/*#include <iostream>
#include <string>
using namespace std;
void Yes(){
	bool p=false;
    string s;
    int n, k=0;
    cin>>s>>n;
    for(int i=0; i<=s.length(); i++){
        for(int j=1; j<=n; j++){
        if(n==1 && s[i] >=48 && s[i] <=57 ){
        	p=true;
		}
        if(s[i] >=48 && s[i] <=57 && s[i+j]>=48 && s[i+j] <=57)
        k++;
        else {
        	break;
		}
    }
}
if(p){
	cout<<"Valid";
}
else if(k!=n){
    cout<<"Not valid";
}
else cout<<"Valid";
}
int main(){
    Yes();
}*/




#include <iostream>
#include <string>
using namespace std;
void Yes(){
	bool p=false;
    string s;
    int n;
    cin>>s>>n;
    for(int i=0; i<=s.length(); i++){
    	int k=0;
        for(int j=0; j<=n; j++){
        if(s[i+j] >=48 && s[i+j] <=57)
        k++;

else {
	break;
}
}
if(k==n){
	p=true;
}
}
if(p==true){
	cout<<"Valid";
}

else cout<<"Not valid";
}
int main(){
    Yes();
}
