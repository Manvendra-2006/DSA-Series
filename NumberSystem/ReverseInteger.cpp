#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int num;
    cout << "Enter a Number : " << endl;
    cin >> num;
    int ans = 0;
    int rem;
    while (num != 0)
    {
        rem = num % 10;
        if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
        {
            cout << "Reverse of Given Integer cannot possible" << endl;
            return 0;
        }
        num = num / 10;
        ans = ans * 10 + rem;
    }
    cout << "Reverse of Given Integer " << ans << endl;
    return 0;
}