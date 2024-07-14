#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int hsh[N];

int main(int argc, char const *argv[])
{   int n;
cin>>n;
int a[n];
       for (int i = 0; i < n; i++)
       {
           cin>>a[i];
           hsh[a[i]]++;
       }

       int q;
       cin>>q;
       while (q--)
       {
          int X;
          cin>>X;
          cout<<hsh[X]<<endl;
       }

    return 0;
}
