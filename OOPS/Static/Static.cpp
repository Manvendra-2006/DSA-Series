#include <iostream>
using namespace std;
void func(){
    int x = 0;
    cout << x << endl;
    x++;
}
void Height(){
   static int x = 0;
    cout<<x<<endl;
    x++;
}
int main(){
    func();
    func();
    Height();
    Height();
    Height();
    return 0;
}
// Here the output always is zero because in call stack func call then x = 0 then next time func call x = 0  // func function
// Here the output always increased by one because x value is not stored in class stack it stored in another place 