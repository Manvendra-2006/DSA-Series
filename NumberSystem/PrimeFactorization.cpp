#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"ENter a number"<<endl;
    cin>>n;
    int num = n;
    int ans = 1;
    int number = 0;
    int arr[1000] = {};
    for(int i=2;i<=n;i++){ 
        if(n%i==0){
            n = n / i;
         if(ans!=num){
            ans = ans * i;     
            arr[number] = i;
            number++;
            cout<<number<<endl;
            i = 1;
         }
    }
   
}
for(int i=0;i<number;i++){
    cout <<arr[i]<< " ";
}

    return 0;
}