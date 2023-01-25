#include <iostream>
#include <cmath>

using namespace std;


int main(){
    int n; 

    cin >> n;
    
    for(int i = 2; i < n; i++){
        bool d = false;
        for(int j = 2; j < i; ++j){
            if(i%j == 0){
                d = true;
            }
            
            
        }
        
        if(not d){
            cout << i << " is prime";
            cout << endl;
            d = false;
            
        }
        
    }
}


