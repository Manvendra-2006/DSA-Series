#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number" << endl;
    cin >> num;
    int original_no = num;
    int ans = 0;
    int rem;
    int mul = 1;
    while (num != 0)
    {
        rem = num % 2;
        if (rem == 0)
        {
            num = num / 2;
            ans = ans + rem * mul;
            mul = mul * 2;
        }
        else if (rem == 1)
        {
            num = num / 2;
            ans = ans + rem * mul;
            if (ans == original_no)
            {
                cout << "Yes" << endl;
                return 0;
            }
            else
            {
                cout << "No" << endl;
                return 0;
            }
        }
    }

    return 0;
}