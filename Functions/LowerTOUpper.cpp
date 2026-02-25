#include <iostream>
using namespace std;
char convert(char character){
    char ans = character - 'a' + 'A';
    return ans;
}
int main(){
    char character;
    cout << "Enter a lowerCase Character" << endl;
    cin >> character;
    char ans = convert(character);
    cout << "The Answer is : " <<ans << endl;
    return 0;
}