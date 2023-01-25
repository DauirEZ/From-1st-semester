#include <iostream>

using namespace std;

int main(){
int i, j, n;
cin >> n;
int a[n][n];
for(int i = 0; i < 1; i++){
cout<<endl;
    for(int j = 0; j < n; j++){
        cout << j << " ";
    }
}
for(int i = 0; i < n-1; i++){

cout<<endl;
cout << i+1 << " ";

for(int j = 1; j < n; j++){
a[j][i] = j * i  + j;
cout << a[j][i] << " ";
}

}





}