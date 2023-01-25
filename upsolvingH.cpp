
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main(){
 int n, max=-212132123;
 cin>>n;
 int z[n];
 for(int i=0; i<n; i++){
  cin>>z[i];
 }
 sort(z, z+n);
 for(int i=0; i<n-1; i++){
  if(max<z[i]*z[i+1]);
  max=z[i]*z[i+1];
 }
 cout<<max;
}