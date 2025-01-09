
/* 
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
#include<iostream>
using namespace std;

void printLine(int i, int n){
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

int main(){
    
    int n = 5;
    for(int i = 0; i< n; i++){
        printLine(i,n);
    }
    for(int i = n-1; i >= 0; i--){
        printLine(i,n);
    }
    return 0;
}