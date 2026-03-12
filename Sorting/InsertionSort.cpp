#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter Size of Array:"<<endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    for(int i=1;i<size;i++){
        for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    swap(arr[j],arr[j-1]);
                }
                else {
                    break;
                }
        }
    }
    cout << "Sorted Array be"<< endl;
    for(int i=0;i<size;i++){
        cout << arr[i] << endl;
    }
    return 0;
}