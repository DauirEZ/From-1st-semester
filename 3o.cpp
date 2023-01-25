#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int arr[];
    int n = sizeof(arr)/sizeoff(arr[0]);
    cin>> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[n-i-1]<<" ";
    }
}