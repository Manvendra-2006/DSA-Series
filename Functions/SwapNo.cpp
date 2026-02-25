#include <iostream>
using namespace std;
int swap(int &a , int &b){
    int temp = a;
    a = b;
    b = temp;
    return (a,b);
}
int main(){
    int a;
    cout << "Enter  value of a: " << endl;
    cin>>a;
    int b;
    cout << "Enter value of b : " << endl;
    cin >> b;
    int ans = swap(a,b);
    cout << "The value of a after swapping is : "<< a<<endl;
    cout << "The value of b after swapping is : "<< b<<endl;
    return 0;
}