#include <iostream>
using namespace std;
int main(){
    int x;
    cout << "THe square of number is :" << endl;
    cin >> x;
    int ans = 0;
    int mid ;
    int start = 0;
    int end = x-1;
    while(start<=end){
        mid = (start+end)/2;
        if((mid * mid ) == x){
            ans = mid;
            break;
        }
        else if((mid*mid)>x){
            end = mid -1;
        }
        else{
            ans = mid;
            start = mid +1;
        }
    }
    cout << ans <<  endl;
    return 0;
}