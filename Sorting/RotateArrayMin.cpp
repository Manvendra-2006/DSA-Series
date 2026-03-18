#include <iostream>
using namespace std;
int main(){
    int arr[7] = {4, 5, 6 ,7 ,1 ,2 ,3};
    int ans = arr[0];
    int start = 0;
    int end = 7;
    int mid = 0;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]>=arr[0]){
            start = mid + 1;
        }
        else {
            ans = arr[mid];
            end = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}