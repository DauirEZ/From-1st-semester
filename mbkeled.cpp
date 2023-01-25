#include <bits/stdc++.h>
using namespace std;
int main ()
{
  
  int n;
  cin >> n;
  string name;
  int points;
  vector<pair<int, string> > students;
  for(int i=0; i<n; i++){
    cin >> name >> points;
    students.push_back(make_pair(points, name));
  }
  cout<<endl;
  sort(students.begin(), students.end());
  reverse(students.begin(), students.end());
  vector<pair<int, string>>::iterator it = students.begin();
  for( it=students.begin(); it != students.end(); it++){
      cout << it->second << ' ' << it->first << endl;
  }
    
  return 0;
}

/*#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main ()
{
  
  cout << sqrt(7) << endl;
  printf("%.7f", sqrt(7));
    
  return 0;
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int z[n];
  vector <int> v;
  for(int i=0; i<n; i++){
    cin>>z[i];
  }
  
    for(int i=0; i<n-i; i++){
      if(i!=n-i-1)
      v.push_back((z[i]+z[n-1-i]));
      else  v.push_back(z[i]);
  }
  sort(v.begin(), v.end());
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  int m, k=0;
  cin>>m;
  int z[m];
  for(int i=0; i<m; i++){
    cin>>z[i];
  }

  for(int i=0; i<m; i++){
    int j;
    for(j=0; j<i; j++)
      if(z[i]==z[j])
        break;
      if(i==j)
        cout<<z[i]<<" ";
      
    
  }
  

}*/
/*#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<string> m;
  vector<string> l;
  string s, nm;
  int n, k=0;
  cin>>n;
  for(int i=0; i<n; i++){
    cin>>s>>nm;
    
    m.push_back(s);
    l.push_back(nm);
  }
  int q;
  string sr, nam;
  cin>>q;
  for(int i=0; i<q; i++){
    cin>>sr>>nam;
    
      if(find(m.begin(), m.end(), sr)!=m.end()){
        k++;
      
      if(find(l.begin(), l.end(), nam)!=l.end()){
        k+=2;
      }
      }
    
  
  if(k==1){
  cout<<"Who are you?";
  }
  else if(k==3 ){
    cout<<"Here";
  }
  else if(k==0){
    cout<<"Upsent";
  }
  k=0;
}
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
  for(int i=0; i<n-i; i++){
    if(i!=n-1-i){
      cout<<z[i]+z[n-i-1]<<" ";
    }
    else cout<<z[i]<<" ";
  }
}*/