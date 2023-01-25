#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int sum = 0;
    int arr[n]; 
    int max = arr[0];
    for ( int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i =0; i < n; i++){

    sum+= arr[i];
    }
    for (int i = 0; i < n; i++){
        if ( max < arr[i]){
            max = arr[i];
        }

    }
    cout << sum << " "<< max;
}