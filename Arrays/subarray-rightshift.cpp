// 0 1 2 3 4 5 6 7 8 9 
// (3,8)
// 0 1 2 0 3 4 5 6 7 9

// 0 1 2 3 4 5 6 7 8 9 
// 

#include<iostream>
using namespace std;

void subArrRightShift(int arr[], int n, int start, int end){
// 0 1 2 0 3 4 5 6 7 9 


    for(int i = end; i >= start; i--){ // 2
        if(i == start){
            arr[i] = 0;
        }
        else{
            arr[i] = arr[i-1];
        }
    }
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

int main(){

    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = 10;
    int start = 3;
    int end = 8;

    subArrRightShift(arr, n, start, end);
    return 0;
}