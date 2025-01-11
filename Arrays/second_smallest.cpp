#include<iostream>
using namespace std;

int main(){

    int n = 5;
    int arr[n] = {7,6,88,-1,36};

    int first = INT16_MAX;
    int second = INT16_MAX;
    

    for(int i = 0; i < n; i++){

        if(first > arr[i]){
            second = first;
            first = arr[i];
        }
        else if(second > arr[i]){
            second = first;
        }
        
    }
    cout << "first = " << first<<endl;
    cout << "second = "<< second<<endl;
}