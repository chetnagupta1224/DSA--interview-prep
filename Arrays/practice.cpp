#include<iostream>
using namespace std;

int main(){

    // int arr[] = {-2,45,0,11,-9};
    // int n = 5;
    // int s = 5;
    
    // while(n>1){
    //     for(int i = 0; i<n-1;i++){

    //         if(arr[i] > arr[i+1])
    //         {
    //             swap(arr[i], arr[i+1]);
    //         }
    //     }
    //      n--;
    // }
    // for(int j  = 0; j <s; j++){
    //             cout << arr[j] << " " ;
    //         }

    // shifting 
    int arr[] = {-2,45,0,11,-9};
    int n = 5;
    int s = 5;
    int temp = 0; // -9
    
// 0,-2,45, 0,11

    for(int i = 0; i< n; i++){ // 5

        int c = temp; // 11
        temp = arr[i]; 
        arr[i] = c;
    }

     for(int i = 0; i< n; i++){
        cout << arr[i] << " ";
    }


    

    return 0;
}