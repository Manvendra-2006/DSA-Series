#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int size;
    cout << "Enter Size of Array:"<<endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    // for(int i=0;i<size-1;i++){
    //     for(int j=0;j<size-1;j++){
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }
    for(int i=size-2;i>=0;i--){
        bool swapped = 0;
        for(int j=0;j<=i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
            

        }
        if(swapped==0){
                cout << "Array is already sorted"<< endl;
                break;
            }
    }
    cout << "The Bubble sort array will be :" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] <<endl;
    }
    return 0;
}