#include <iostream>
using namespace std;
int main(){
    int arr[5] = {8,10,2,4,6};
    int ans = arr[0];
    for(int i=0;i<5;i++){
        if(arr[i] <=ans){
            ans = arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}