#include <iostream>
using namespace std;
int cube(int num){
    int ans = num * num * num;
    return ans;
}
int main(){
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    int ans = cube(num);
    cout << "The cube of input number is :" << ans << endl;
    return 0;
}