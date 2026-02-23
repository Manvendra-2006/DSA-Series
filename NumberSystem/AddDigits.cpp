#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int ans = 0;
    int rem;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem + ans;
    }
    cout << "Sum of  Digit Number is : " << ans << endl;
    return 0;
}