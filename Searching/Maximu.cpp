#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    int i =0 ;
    while(n!=0){
        arr[i] = n % 10;
        n = n / 10;
        i++;
    }
    cout << i << endl;
    for(int j=i-1;j>=0;j--){
        cout << arr[j] << " ";
    }
    for(int k=0;k<i;k++){
        if(arr[i]==9){
            arr[i] = 6;
            break;
        }
        else if(arr[i] == 6){
            arr[i] = 9;
            break;
        }
    }
    for(int k = 0;k<i;k++){
        cout << arr[i] << " ";
    }
    return 0;
}