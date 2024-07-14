#include<bits/stdc++.h>
using namespace std;
void deci_to_bin(int n)
{
    for ( int i = 31; i >=0; i--)
    {
         if (n&(1<<i))
         {
            cout<<"1";
         }
         else cout<<"0";

    }

}
int main(int argc, char const *argv[])
{
    int x=-3;
    deci_to_bin(x);

cout<<"\n";
cout<<__builtin_clz(x);
cout<<"\n";
cout<<__builtin_popcount(x);
    return 0;
}
