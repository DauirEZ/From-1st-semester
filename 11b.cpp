#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n ;
    bool k=false;
    cin>>n;
    int a[n];
    for (int i=0; i<n; i++)
    cin>>a[i];
for (int i=0; i<n-1; i++){
for (int j=i+1; j<n; j++)
if (a[i]==a[j]){
    k=true;
    break;
    }
}

if (k==true)
cout<<"NO";
else cout<<"YES";
}
