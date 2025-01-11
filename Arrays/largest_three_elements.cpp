#include<iostream>
using namespace std;

int main(){

    int n = 5; 
    int arr[n] = {55,5,8,15,6};
    
    int maxNum = arr[0];
    for(int i = 1; i < n; i++){
        if(maxNum < arr[i]){
            maxNum = arr[i];
        }
    }
    int secondMax = arr[0];
    for(int i = 1; i < n; i++){
        if(secondMax < arr[i] && arr[i] != maxNum){
            cout<< "second " << secondMax<<endl;
            secondMax = arr[i];
            
        }
    }
    int thirdMax = arr[0];
    for(int i = 1; i < n; i++){
        if(thirdMax < arr[i] && arr[i] != maxNum && arr[i] != secondMax){
            
            thirdMax = arr[i];
            
        }
    }
    cout <<"Max element is = "<< maxNum<<endl;
    cout << "Second max elment is = " << secondMax << endl;
    cout << "Third max elment is = " << thirdMax;
  
    
    return 0;
}