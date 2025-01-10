// https://www.w3resource.com/cpp-exercises/for-loop/index.php

//87

#include<iostream>
using namespace std;

int main(){

    int n = 4;

    int s = 0;
    int count = 0;
    int s2 = 0;

    for(int i = 1; i <= n; i++){

        int s1 = i*100;

        for(int j = 1; j <= n; j++){
            if(i==j)
                continue;
            else 
                s2 = s1+j*10;

            for(int k = 1; k <= n; k++){
            if( i == j || k == j || i == k)
                continue;
            else{
                
                s = s2 +k;
                cout << s << endl;
                count++;
                
            }

            
        }
        }
        
    
    }
    cout <<"numbers = "<<count;
    return 0;
}