#include<iostream>
using namespace std;

int main(){

    int arr[] = {-10,-8,-4,12,23,69};
    int n = 6; 
    int s = 0;
    int j = 0;

    while(s < n){
        for(int i = s+1; i< n; i++){
            if(arr[i] < arr[j])
                j = i;
            
            cout<< i<< " " << j << endl;
        }
        swap(arr[s],arr[j]);
        s++;
        j = s;
    }

    for(int i = 0; i<n; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}