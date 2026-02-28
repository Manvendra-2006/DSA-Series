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
    int min = INT_MAX;
    int smin = INT_MAX;
    for(int i=0;i<size;i++){
      
        if(min>=arr[i]){
            min = arr[i];
        }
    }
    for(int i=0;i<size;i++){
        if(smin>=arr[i] && min!=arr[i]){
            smin = arr[i];
        }
    }
    cout << "The second min number will be : "<<smin << endl;
    return 0;
}