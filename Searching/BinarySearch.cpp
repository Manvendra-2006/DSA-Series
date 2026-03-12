#include <iostream>
using namespace std;
int BinarySearch(int arr[] , int n , int mid , int x){
    int start = 0;
    int end = n-1;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == x){
            return mid;
        }
        else if(arr[mid]>x){
            end = mid -1;
        }
        else if(arr[mid]<x){
            start = mid +1;
        }        
    }
    return -1;
}
int main(){
     int size;
    cout << "Enter Size of Array:"<<endl;
    cin >> size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    int x ;
    cout << "Enter a element to be search " << endl;
    cin >> x;    
    int mid;   
   int ans = BinarySearch(arr, size , mid,x)  ;
   cout << "Element is found at index " << ans<<"is " << arr[ans]  << endl;
   if(ans == -1){
    cout << "Element is not found" << endl;
   }
    return 0;
}