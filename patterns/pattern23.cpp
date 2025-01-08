#include<iostream>
using namespace std;

int main(){

    int n = 3;
    for(int i = 0; i < 2*n - 1; i++){
        for(int j = 0; j < 2*n - 1; j++){
            if(j == 2*n - 2|| i == 2*n - 2 || i == 0 || j == 0)
                cout << n;
            else 
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}