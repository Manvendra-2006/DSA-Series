#include <iostream>
using namespace std;
int main(){
    int arr[7] = {4, 5, 6 ,7 ,1 ,2 ,3};
    int start = 0;
    int end = 6;
    int mid = 0;
    int n;
    cout << "ENter elment to be search"<< endl;
    cin >> n;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid] == n){
            cout << "Element Found"<<endl;
            break;
        }
        else if(arr[mid]>=arr[0]){
            if(arr[start]<= n && arr[mid]>n){
                end = mid - 1;
            }
            else{
                start = mid +1 ;
            }
        }
        else if(arr[mid]<arr[0]){
            if(arr[mid]<n && arr[end]>=n){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return 0;
}