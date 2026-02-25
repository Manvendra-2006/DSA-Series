#include <iostream>
using namespace std;
char convert(char character){
    char ans = character - 'A' + 'a';
    return ans;
}
int main(){
    char character;
    cout << "Enter a character"<<endl;
    cin >> character;
    char ans = convert(character);
    cout << "The answer is : "<< ans << endl;
    return 0;
}