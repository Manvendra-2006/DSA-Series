#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cout << "Enter a number "<< endl;
    cin >> num;
    // int ans = sqrt(num); // By Using a function
    int ans = 1;
    int n =1;
    int answer ;
    while(ans!=num){
        if(ans<num){
            ans = n * n;
            answer = n;
            n++;
        }
        else if(ans>num){
            cout << "Not a square number" << endl;
            return 0;
        }
    }
    cout << answer << endl;
    return 0;
}