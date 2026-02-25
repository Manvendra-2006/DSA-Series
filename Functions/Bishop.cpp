#include <iostream>
using namespace std;
int Bishop(int x , int y){
        int a = min(x-1,y-1);
        int b = min(x-1,8-y);
        int c = min(8-x,8-y);
        int d = min(8-x,y-1);
        int total = a + b + c + d;
        return total;
}
int main(){
    int x;
    cout << "Enter value of x" << endl;
    cin >> x;
      int y;
    cout << "Enter value of x" << endl;
    cin >> y;
    int number = Bishop(x,y);
    cout << "Enter a number of places " << number << endl;
    return 0;
}