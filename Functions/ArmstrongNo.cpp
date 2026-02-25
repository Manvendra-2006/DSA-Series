#include <iostream>
using namespace std;
int power(int rem, int n)
{
    int ans = 1;
    while (n > 0)
    {
        ans = rem * ans;
        n--;
    }
    return ans;
}
void checkno(int num)
{
    int ans = 0;
    int rem;
    int mul = 1;
    int n = 0;
    int original_no = num;
    int check_no = num;
    int answer;
    while (original_no > 0)
    {
        original_no = original_no / 10;
        n++;
    }
    while (num != 0)
    {
        rem = num % 10;
        num = num / 10;
        answer = power(rem, n);
        ans = answer + ans;
        mul = mul * 10;
    }
    if (ans == check_no)
    {
        cout << "The input number is armstrong number" << endl;
    }
    else
    {
        cout << "The input number is not a aremstrong number" << endl;
    }
    return;
}
int main()
{
    int num;
    cout << "Enter a number :" << endl;
    cin >> num;
    checkno(num);
    return 0;
}