#include<iostream>
using namespace std;

int main(){

    int arr[] = {-2,5,8,9,10,5,7};

    int n = 7;
    

    int i = 0;
    int j = n-1;
    while(j > i){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }

    for(int k = 0; k < n; k++){
        cout << arr[k] << " ";
    }


    return 0;
}