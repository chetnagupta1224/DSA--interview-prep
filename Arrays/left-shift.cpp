// 1 2 3 4 5
// 2 3 4 5 0

#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {4,5,12,-9,69}; 
    int n = 5;

    // int temp = 0; // 1
// 2,3,4,5,0
    // for(int i = n-1; i>=0; i--){ // -1
    //     int c = temp; // 2
    //     temp = arr[i];  
    //     arr[i] = c; 
    // }
    // for(int i = 0; i<n; i++){ 
    //     cout << arr[i] << " ";
    // }

// 5,12,-9,69,0

    for(int i = 0; i < n; i++){ // 5
        if(i == n-1){
            arr[i] = 0;
        }
        else{
            arr[i] = arr[i+1];
        }
    }
     for(int i = 0; i<n; i++){ 
        cout << arr[i] << " ";
    }
    

    return 0;

}