#include <bits/stdc++.h>
using namespace std;
 
void printDistinct(int arr[], int n, int k=0)
{
    sort(arr, arr+n);
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j){
            if(arr[i]%2!=0){
                cout<<arr[i]<<" ";
            }
        }
        
    }
}
 
int main()
{
    int m, k=0;
    cin>>m;
    int arr[m];
    for(int i=0; i<m; i++){
        cin>>arr[i];
    }
    
    printDistinct(arr, m, k);
    return 0;
}