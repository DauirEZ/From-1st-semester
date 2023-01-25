#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    
    int n, i, m;
    
    
    cin >> n >> m;
    
    
    int A[n];
    int index = 0;
    bool there = false;
    for(int i = 0; i < n; i++){
        
        cin >> A[i];

        if (A[i] == m){
            index = i;
            there = true;
            
        }
        
    }
    
    if(there){
        cout << index + 1;
        
        
    }
    else{
        
        A[n] = m;
        sort(A, A + (n + 1));
        for(int i = 0; i < n+2; i++ ){
            if(A[i] == m){
                index = i;
                
                
            }
                
                
                
                
            }
            
        cout << index;    
            
        }
       
        
        
    }   