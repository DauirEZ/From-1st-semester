
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
 int n, m, d;
 cin>>n>>m>>d;
 if(d>0){
  for(int i=n; i<=m; i=i+d){
   if(ceil(sqrt(i))>sqrt(i)){
    continue;
   }
   else cout<<i<<" ";
  }
 }
 
 if(d<0){
  for(int i=m; i<=n; i=i-d){
   if(ceil(sqrt(i))>sqrt(i)){
    continue;
   }
   else cout<<i<<" ";
  }
 }
}