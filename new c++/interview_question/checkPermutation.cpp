#include <bits/stdc++.h>
using namespace std;

bool check_permutation(string a, string b)
{
    if (a.length() != b.length()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main(int argc, char const *argv[])
{
    cout << check_permutation("abc", "cbb");
    return 0;
}
