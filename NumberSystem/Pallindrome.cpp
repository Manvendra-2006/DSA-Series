#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    int ans = 0;
    int original_no = num ;
    int rem;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = ans * 10 + rem;
    }
    if (ans == original_no)
    {
        cout << "Yes , It's a Pallindrome" << endl;
    }
    else
    {
        cout << "No, It's not a Pallindrome" << endl;
    }
}