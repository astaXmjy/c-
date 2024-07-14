#include <bits/stdc++.h>
using namespace std;
int permutation(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * permutation(n - 1);
}
int trailing_zeroes(int n)
{
    cout << permutation(n) << "\n";
    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
    {
        res = res + n / i;
    }
    return res;
}
void ispalindrome(int n)
{
    int sum = 0;
    int res = 0;
    while (n / 10 != 0)
    {
        res = n % 10;
        sum = sum * 10 + res;
        n = n / 10;
    }
    if (n == sum)
    {
        cout << "is palindrome"
             << "\n";
    }
    else
    {
        cout << "Maa chuda bsdk";
    }
}
int main(int argc, char const *argv[])
{
    int n = 30;
    cout << permutation(30) << "\n";
    cout << trailing_zeroes(n) << "\n";
    ispalindrome(4443);
    return 0;
}
