#include<iostream>
using namespace std;

int main(){
    
    int n = 5;
    for(int i = 0; i< n; i++){
        // step 1: printing stars
        for(int j = 0; j < n-i ; j++){
            cout << "*";
        }
        // step 2: spaces
       for(int j = 0; j < 2*i; j++){
        cout << " ";
       }
       // step 3: stars
       for(int j = 0; j < n-i ; j++){
            cout << "*";
        }

       cout << endl; 
    }
      
    
    
    
    return 0;
}