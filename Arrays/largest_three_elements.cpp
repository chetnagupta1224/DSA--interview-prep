#include<iostream>
using namespace std;

int main(){

    int n = 5; 
    int arr[n] = {55,54,8,15,6};
    
    int first = 0;
    int second = 0;
    int third = 0;

    for(int i = 0; i<n; i++){

        if(first < arr[i]){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(second < arr[i]){
            third = second;
            second = arr[i];
        }
        else if(third < arr[i]){
            third = arr[i];
        }
            

       
    }
    cout << "first = " << first<<endl;
    cout << "second = "<< second<<endl;
    cout << "third = "<< third << endl;

    
    return 0;
}