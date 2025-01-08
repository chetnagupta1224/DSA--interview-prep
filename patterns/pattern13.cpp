#include<iostream>
using namespace std;

int main(){

    int n = 4;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<= i; j++){
            cout << j+1;
        }
        

        for(int j = 0; j < 2*n - 2*(i+1); i++){
            cout << "*";
        }
         cout <<endl;
       
        // for(int j = i; j >= 0; j--){
        //     cout << j+1;
        // }

        
    }

    
    return 0;
}