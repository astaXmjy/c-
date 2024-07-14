#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int m=47;
    long long facto=1;
    for (int i =   2; i < n; i++)
    {
        facto=(facto*i)%m;
    }

    cout<<facto;
    
    return 0;
}
