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
    int ans;
    while(start<=end){
        mid =(start+end)/2;
        if(arr[mid] == x){
            ans = mid ;
            break;
        }
        else if(arr[mid]<x){
            ans = mid+1;
            start = mid + 1;
        }
        else{
            ans = mid -1;
            end = mid -1;
        }
    }
    cout << ans << endl;
    return 0;
}