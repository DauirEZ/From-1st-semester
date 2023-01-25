#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, cur_cnt, index = 0; cin >> n; int a[n]; 
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a+n);
    while(index < n - 1){
        int cur_cnt = -1;
    for(int i = index; i < n; i++){
        int cnt = 0;
        for(int j = i+1; j < n; j++){
            if(a[i] == a[j]) cnt++;
        }
        if(cnt > cur_cnt){
            cur_cnt = cnt;
            index = i + cur_cnt;
        }
    }
    cout << a[index] << " ";
    }
}
