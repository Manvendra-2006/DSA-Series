#include <iostream>
using namespace std;
int main(){
    int size = 7;
    cout << "Answer"<<endl;
    int arr[size] = {1,2,2,4,6,1,2};
        for(int i=0;i<6;i++){
    
            for(int j=i+1;j<7;j++){

                if(arr[i] == arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
            }
        }
        size--;
        for(int i=0;i<7;i++){
            cout<<arr[i] << " ";
        }
        cout << "Answer"<<endl;
    return 0;
}