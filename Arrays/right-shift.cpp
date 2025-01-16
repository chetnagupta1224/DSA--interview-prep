//  2,1,4,5,6

// 0 1 2 3 4
//
// 0,2,1,4,5

#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int temp = 0; // 5
   
   // 0 1 2 3 4
   // 
    
    for(int i = 0; i<n ; i++){  // 4
        int c = temp; // 4
        temp = arr[i]; 
        arr[i] = c; 

        for (int i = 0; i < n; i++)
        {
            //  0 2 3 4 5
            //  0 1 3 4 5
            //  0 1 2 4 5
            //  0 1 2 3 5
            //  0 1 2 3 4
           cout << arr[i] << " ";
        }
       cout << endl;

    } cout << endl;
    for (int i = 0; i < n; i++)
        {
           cout << arr[i] << " ";
        }

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout<< endl;
    //     if (i == 0)
    //     {
    //         arr[0] = 0;
    //     }
    //     else
    //     {
    //         arr[i] = arr[i - 1];
    //     }

    //     for (int i = 0; i < n; i++)
    //     {
    //         cout << arr[i] << " ";
    //     }
    //     cout<< endl;
    //     cout<< endl;
    // }
    
        for(int i = n-1; i >=0;i--){ // -1

        if(i == 0){
            arr[i] = 0;
        }
        else{
            arr[i] = arr[i-1];
        }
    }
    for(int i = 0; i<n; i++){ 
        cout << arr[i] << " ";
    }

    return 0;
}
