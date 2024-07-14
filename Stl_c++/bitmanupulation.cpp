#include <bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    for (char i = 'A'; i <= 'E'; i++)
    {
        cout << i << endl;
        printBinary(int(i));
    }

    for (char i = 'a'; i <= 'e'; i++)
    {
        cout << i << endl;
        printBinary(int(i));
    }
    char A = 'A';
    char a = A | (1 << 5);
    cout << a << endl;

    cout << char((a & (~(1 << 5)))) << endl;

    cout << char(1 << 5) << endl;
    cout << char('C' | ' ') << endl;

    printBinary(int('_'));

    cout << char('c' & '_') << endl;

    int a = 59;
    int i = 4;
    int b = (a & (~((1 << (i + 1)) - 1)));
    printBinary(a);
    printBinary(b);

    i = 3;
    int c = (a & ((1 << (i + 1)) - 1));
    printBinary(c);

    return 0;
}
