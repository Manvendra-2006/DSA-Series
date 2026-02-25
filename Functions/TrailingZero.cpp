#include <iostream>
using namespace std;
int factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int TrailingZero(int ans){
     int rem;

    int n = 0;
    while (ans != 0)
    {
        rem = ans % 10;
        if (rem == 0)
        {
            n++;
            ans = ans / 10;
        }
        else if (rem != 0)
        {
            ans = 0;
        }
    }
    return n;
}
int main()
{
    int num;
    cout << "Enter a number " << endl;
    cin >> num;
    int ans = factorial(num);
    cout << ans << endl;
    int number = TrailingZero(ans);
    // int rem;

    // int n = 0;
    // while (ans != 0)
    // {
    //     rem = ans % 10;
    //     if (rem == 0)
    //     {
    //         n++;
    //         ans = ans / 10;
    //     }
    //     else if (rem != 0)
    //     {
    //         ans = 0;
    //     }
    // }
    cout <<"The Trailing No. of zero are : "<< number << endl;
    return 0;
}