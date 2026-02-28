#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "The array will be :" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(max<=arr[i]){
            max = arr[i];
            
        }
    }
    cout<< "The maximum number is : " << max << endl;
    return 0;
}