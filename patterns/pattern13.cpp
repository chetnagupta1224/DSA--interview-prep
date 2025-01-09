#include<iostream>
using namespace std;

int main(){

    int n = 4;
    

        
    for(int i = 0; i < n; i++){

        // step 1: normal triangle
        for(int j = 0; j <= i; j++){
            cout << j+1;
        }
        // step2: spaces
        for(int j = 0; j < 2*n-2*i-2;j++){
            cout << " ";
        }
        // step 3: inverted triangle
        for(int j = i; j >= 0; j--){
            cout << j+1;
        }
        
        cout << endl;
    }

    
    return 0;
}