#include <bits/stdc++.h>

using namespace std;

int a[1003][1003];

int main(){
    int x, y;
    cin >> x >> y;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int ox1, oy1, ox, oy;
        cin >> ox >> oy >> ox1 >> oy1;

        for(int o = ox; o < ox1; o++){
            for(int u = oy; u < oy1; u++){
                a[o][u] = 1;
            }
        }
    }

    int cnt = x*y;
    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            if(a[i][j] == 1) cnt--;
        }
    }

    cout << cnt;
}