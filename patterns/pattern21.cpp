#include<iostream>
using namespace std;

int main(){

    int n = 5;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){

            cout << "*"; 
        }
        for(int j = 0; j < 2*n-2*i-2; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){

            cout << "*"; 
        }
        cout << endl;
    }
    for(int i = n-2; i >= 0; i--){
        for(int j = 0; j <= i; j++){

            cout << "*"; 
        }
        for(int j = 0; j < 2*n-2*i-2; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){

            cout << "*"; 
        }
        cout << endl;
    }
    
    return 0;
}
/*

*        * 0
**      ** 1
***    *** 2
****  **** 3 n-2
********** 4 n-1

****  **** 3 n-2
***    *** 2
**      ** 1
*        * 0 


*/