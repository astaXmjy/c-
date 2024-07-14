#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int Binlong(long long a,long long b)
{
    a%=M;  int ans=1;
    while (b)
    {
        if (b&1)
        {
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b>>=1 ;
        
    } 
    return ans;     

}
 int binMult(long long a,long long b )
 {
    int ans=0;
    while (b>0)
    {
        if (b&1)
        {
            ans=(ans+a)%M;
        }a=(a+a)%M;
        b>>=1;
    }
    return ans;
    
 }
int main(int argc, char const *argv[])
{
    
    return 0;
}
