#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
int a[N];   // 1 |2 3 4 5| 6 7
int pf[N];  // 1 3 6 10 15 21 28

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;

    for (int  i = 1; i <=n; i++)
    {
        cin>>a[i];
        pf[i]=pf[i-1]+a[i];
    }
    int q;
    cin>>q;
    while (q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;

    }

    return 0;
}

