#include<bits/stdc++.h>
using namespace std;
const int M=1e9 +7;
int binexp_iterative(int a,int b)
{
    int ans=1;
    while (b)
    {
        if (b&1)
        {
            ans=(ans*1LL*a)%M;  
        }
        a=(a*1LL*a)%M;
        b>>=1;
        
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{

    cout<<binexp_iterative(74,3647863);
    
    return 0;
}
