#include<iostream>
using namespace std;

int main()
{
    int arr[] = {15,17,-23,2,69,11,24};
    int n = 7;
    int toSort;
    int corrPos;
// -23 2 15 17 69 11 24 

    // step 1: taking element to sort
    for(int i = 0; i<n; i++){  // 3
        toSort = arr[i]; // 2
        // step 2: find the correct position of that element
        for(int j = 0; j <= i; j++){ // 1
            if(toSort <= arr[j]){
                corrPos = j; // 1
                break;
            }
        }
// -23 2 15 17
        // step 3: right shifting the array 
        for(int k = i; k > corrPos; k--){  // 1
            arr[k] = arr[k-1];
        }
        // step 4: replace the value of that place to correct value
        arr[corrPos] = toSort;
    }
    for(int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }

    return 0;
}