#include<bits/stdc++.h>
using namespace std;
int binExp(int a, int b)
{   if(b==0) return 1;
    long res=binExp(a,b/2);
    if(b&1){
        return a*res*res;
    }
         return res*res;
}
int main(int argc, char const *argv[])
{
    int a=3;
    int b=5;
    cout<<binExp(a,b);
    return 0;
}
