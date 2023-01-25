#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    double gpa = 0;
    for(int i=0; i<n; i++){
        int at1, at2, f, c;
        cin >> at1 >> at2 >> f >> c;
        sum += c;
        if((at1+at2 > 29) && (f > 19) && ((at1 + at2 + f) != 100)){
            double b = ((((at1 + at2 + f) - 50)/5)+3);
            gpa += double((b/3)*c);
        }
        if((at1 + at2 + f) == 100){
            gpa += 4;
        }
    }
    cout  << double(gpa/sum);
}