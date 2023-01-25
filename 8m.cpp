#include <bits/stdc++.h>
using namespace std;
 
void printDistinct(int arr[], int n, int k=0)
{
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
        if (i == j)
        k+=arr[i];
    }
    cout<<k;
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