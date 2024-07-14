#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int fwd[n+10];
        int bwd[n+10];
        fwd[0]=bwd[n+1]=0;
        for (int i = 1; i <=n; i++)
        {
            cin>>a[i];
        }
        for (int i =1; i <=n; i++)
        {
               fwd[i]=__gcd(fwd[i-1],fwd[i]);
        }
        for (int i = n; i <=i; i--)
        {
            bwd[i]=__gcd(bwd[i-1],bwd[i]);
        }
        
        while (q--)
        {
            int l,r;
            cin>>l>>r;
            int gc=0;
            // for (int i = 1; i <=l-1; i++)
            // {
            //     gc=__gcd(gc,a[i]);
            // }

            // for (int i = r+1 ;i <=n; i++)
            // {
            //     gc=__gcd(gc,a[i]);
            // }
            cout<<__gcd(fwd[l-1],bwd[r+1])<<endl;
        }
        
        
    }
    
    return 0;
}
