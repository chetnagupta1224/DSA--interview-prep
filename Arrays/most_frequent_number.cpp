#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[] = {1,1,5,5,5,5,5,6,8,8,9,7,7,5};

    int len = sizeof(arr)/sizeof(arr[0]);

    int hash[len] = {0};

    for(int i = 0; i < len; i++){
        hash[arr[i]] += 1;
    }
    int freq = hash[0];
    int lenHash = sizeof(hash)/sizeof(hash[0]);
    for(int i = 0; i < lenHash; i++){

        if(freq < hash[i]){
            freq = hash[i];
        }
        cout << "index = " << i << " Value = "<< hash[i] << endl;
    }
    cout << "Times = " <<freq << endl;


    return 0;
}