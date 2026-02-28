#include <iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    cout << "Enter a value of x : " << endl;
    cin >> x;
    int c =0;
    for(int i=0;i<10;i++){
        if(x==arr[i]){            
            c = 1;
            break;
    }        
}       
if(c==1){
cout << "Yes, Element is found" << endl;
}
else{
    cout<<"No , Element is not found" << endl;
}
    return 0;
}