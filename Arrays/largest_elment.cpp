#include<iostream>
using namespace std;

int main(){

    int n = 5; 
    int arr[n] = {3,5,8,7,9};
    int maxNum = arr[0];
    for(int i = 1; i < n; i++){
        if(maxNum < arr[i]){
            maxNum = arr[i];
        }
    }
    cout <<"Max element is = "<< maxNum;
    return 0;

}