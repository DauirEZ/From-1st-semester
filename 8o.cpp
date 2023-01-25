#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int m, k=0;
    string arr;
    cin>>arr;
    for(int i=0; i<arr.length(); i++){
        arr[i]=tolower(arr[i]);
    }
    for (int i=0; i<arr.length(); i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j){
        k++;
        }
    }
    cout<<k;
    cout<<endl;
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.length(); i++){
        arr[i]=tolower(arr[i]);
    }
    for (int i=0; i<arr.length(); i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j){
        cout<<arr[i]<<" ";
        }
    }
    return 0;
}