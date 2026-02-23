#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter Binary Number :" << endl;
    cin >> num;
    int ans = 0;
    int rem;
    int mul = 1;
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        ans = rem * mul + ans;
        mul = mul * 2;
    }
    cout << "Decimal Number is : " << ans << endl;
    return 0;
}