#include <iostream>
#include <climits>
using namespace std;
int main(){
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    int temp[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout << "The array will be :" << endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    for(int i=0;i<size;i++){
        temp[i] = arr[size-1-i];
    }
    cout<<"Answer will be : " << endl;
     for(int i=0;i<size;i++){
        cout <<temp[i] << " ";
    }
    return 0;
}