// #include <iostream>
// using namespace std;
// int main(){
//     int size;
//     cout << "Enter size of array" << endl;
//     cin >> size;
//     int arr[size];
//     for(int i =0;i<size;i++){
//         cin >> arr[i];
//     }
//     int x;
//     cout << "Enter Element to be search" << endl;
//     cin >> x;    
//     for(int i=0;i<size;i++){
//         if(arr[i] == x){
//             cout << "Element is found" << endl;
//             cout << i << endl;
//            break;
//         }
        
//     }
//     for(int i=size-1;i>=0;i--){
//         if(arr[i] == x){
//             cout << "Element is found" << endl;
//             cout << i << endl;
//             break;
//         }
        
//     }
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter size of array" << endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int x ;
    cout << "Element to be search" << endl;
    cin >> x;
    int start = 0;
    int end = size-1;
    int mid;
    int first = -1;
    int last = -1;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == x){
            first = mid;
            end = mid -1;
        }
        else if(arr[mid]<x){
            start = mid + 1;
        }
        else{
            end = mid -1 ;
        }
    }
    start = 0;
    end = size-1;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == x) {
            last = mid;
            start = mid + 1;
        }
        else if(arr[mid]<x){
            start = mid + 1;
        }
        else{
            end = mid -1;
        }
    }
    cout << first << endl;
    cout << last << endl;
    return 0;
}