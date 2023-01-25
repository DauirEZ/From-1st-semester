/*#include <bits/stdc++.h>
using namespace std;
int main(){
    char k;
    string s;
    cin>>k;
    cin>>s;
    int n;
    for(int i=0; i<s.length(); i++){
        for(n=i; n<s.length(); n++){
        if(s[i]==k){
        s.erase(i,1);
        }
        else if(s[i]==k and s[i+n]==k){
            s.erase(i,n);
        }

    }
    }
    cout<<s;
    
}*/
/*#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int decimal, remainder, product = 1;
  string hex_dec = "";
  cin >> decimal;
  while (decimal != 0) {
    remainder = decimal % 16;
    char ch;
    if (remainder >= 10)
      ch = remainder + 55;
    else
      ch = remainder + 48;
    hex_dec += ch;
  
    decimal = decimal / 16;
    product *= 10;
  }
  reverse(hex_dec.begin(), hex_dec.end());
  cout <<hex_dec;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin, s);
    int k,q=0;
    cin>>k;
    char j[k];
    for(int i=0; i<k; i++){
        cin>>j[i];

    }
    
    for(int i=0; i<k; i++){
    for(int t=0; t<s.length(); t++){
        if(j[i] == s[t]){
            q++;
        }
    }
    cout<<j[i]<<" "<<q<<endl;

}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  bool p=false;
  int n;
  string s, l="";
  double price, q, top=161565165, kk;
  cin>>n;
  while(n>0){
    cin>>s>>price>>q;
    kk=price/q;
    if(top>kk){
      top=kk;
      l=s;
      p=true;
    }
    n=n-1;
  }
    if(p==true){
    cout<<l;
  }
  
  }*/

/*#include <bits/stdc++.h>
using namespace std;
int main(){
  string s, k="@gmail.com", j="";
  int n, p=0;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>s;
  
    if(s.find(k)!=-1){
      for(int q=0; q<s.length()-10; q++){
        j.push_back(s[q]);
      }
    }
  }
  cout<<j<<endl;
}*/
/*#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    string gm = "@gmail.com";
    string a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    for(int i = 0; i < n; i++){
        if(a[i].find(gm) != -1){
            a[i].erase(a[i].find(gm), a[i].find(gm) + gm.size() - 1);
            cout << a[i] << endl;
            }
        }

}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  bool p=false;
  string s;
  getline(cin,s);
  for(int i=0; i<s.size(); i++){
    if(s[i]>=48 && s[i]<=57){
      s.erase();
      p=false;
    }
    else {
      p=true;
  }
}
if(p==true){
  cout<<s;
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  int max=0,k=1;
  string s, s1="";
  cin>>s;
  if(s.size()==1){
    cout<<s<<" "<<max+1;
  }
  else {
  for(int i=0; i<s.size(); i++){
    if(s[i]==s[i+1]){
      k++;
    }
    else{
      if(max<k){
        max=k;
        s1.insert(0, s, i, 1);
      }
      k=1;
    }
  }
  
  for(int i=0; i<1; i++){
    cout<<s1[i]<<" "<<max;
  }
}
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  reverse(s.begin(), s.end());
  long long int decimal=0;
  for(int i=0; i<s.size(); i++){
    decimal=decimal+int((s[i]-48)*pow(2,i));
  }
  cout<<decimal;
}*/
/*#include <iostream>

using namespace std;

string nonumber(string s1){
    for(int i=0;i<s1.length();i++){
        if(s1[i]>=48 && s1[i] <= 57){
            return "";
        }
    }
    return s1;
}
int main(){
    string s;
    getline(cin, s);
    string s1="";
    for(int i = 0; i <= s.length(); i++){
        if(s[i] == ' ' || i == s.length()){
            string s2 = nonumber(s1);
            s1 = "";
            if(s2 != ""){
                cout << s2 << endl;
            }
        }else{
            s1+=s[i];
        }
    }
}*/
#include <bits/stdc++.h>
using namespace std;
int main(){
  string s;
  getline(cin, s);
  int n;
  cin>>n;
  char k[n];
  for(int i=0; i<n; i++){
    cin>>k[i];
  }
  char p;
  for(int i=0; i<n-1; i++){
  for(int j=0; j<n-i-1; j++){
    if(k[j]>k[j+1]){
      p=k[j];
      k[j]=k[j+1];
      k[j+1]=p;
    }
  }
}
  
  int kj=0;
  for(int j=0; j<n; j++){
  for(int i=0; i<s.length(); i++){
    if(s[i]== k[j]){
      kj++;
    }
    
  }
  cout<<k[j]<<" - "<<kj<<endl;
    kj=0;
}

}