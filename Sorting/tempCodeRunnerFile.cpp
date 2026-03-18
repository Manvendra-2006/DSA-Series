#include <iostream>
using namespace std;
int main(){
    int size = 7;
    int arr[size] = {1,2,2,4,6,1,2};
        for(int i=0;i<6;i++){
            for(int j=i+1;j<7;i++){
                if(arr[i] == arr[j+1]){
                    arr[i] = arr[j+1];
                }
            }
        }