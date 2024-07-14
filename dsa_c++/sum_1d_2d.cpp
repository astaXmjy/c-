#include <bits/stdc++.h>
using namespace std;

 /** const int N=1e5+10;
int a[N];
int pf[N];
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int  i = 1; i < n; i++)
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
        // worst case O(N)+O(Q)=10^5 ----->worst case ------>after optimization

     }
     // O(N)+O(Q*N)=10^10  ----->worst case ------>before optimization


    return 0;
}
**/
const int N=1e3+10;
int a[N][N];
long long pf[N][N];
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j<=n; j++)
        {
            cin>>a[i][j];
            pf[i][j]=a[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
        }
        
    }

    int q;
    cin>>q;
    while (q--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1]<<endl;

    }

    return 0;
}
