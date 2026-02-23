#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number : " << endl;
    cin >> num;
    int ans = 0;
    int rem;
    int mul = 1;
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        ans = rem * mul + ans;
        mul = mul * 10;
    }
    cout << "Binary Number is : " << ans << endl;
    return 0;
}