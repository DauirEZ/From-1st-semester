#include <iostream>

void check();

using namespace std;

int a[100][100];
bool checkZero(int i, int j, int n, int m) {
    if (i >= 0 && j >= 0 && i < n && j < m) {
        if (a[i][j] == 0) {
            return true;
        }

    }
    return false;
}
bool checkOne(int i, int j, int n, int m) {
    if (i >= 0 && j >= 0 && i < n && j < m) {
        if(a[i][j] == 1) {
            return true;
        }
    }
    return false;
}
int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    bool res = false;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
             if(checkZero(i, j, n, m) && checkZero(i, j + 1, n, m)
             && checkZero(i + 1, j, n, m) && checkZero(i + 1, j + 1, n, m)) {
                res = true;
                break;
             }
             else if(checkOne(i, j, n, m) && checkOne(i, j + 1, n, m)
               && checkOne(i + 1, j, n, m) && checkOne(i + 1, j + 1, n, m)) {
                res = true;
                break;
            }
        }
    }
    if(res) {
        cout << "NO";
    }
    else cout << "YES";
}
