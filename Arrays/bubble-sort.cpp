#include<iostream>
using namespace std;

int main(){

    int arr[] = {-2,5,8,9,10,5,-10};

    int n = 7; 
    int temp = n;

    while(n > 1){
        for(int i = 0; i<n-1; i++){
            if(arr[i] > arr[i+1])
                swap(arr[i], arr[i+1]);
        }
        n--;
    }

    for(int k = 0; k < temp; k++){
        cout << arr[k] << " ";
    }
    
    return 0;
}