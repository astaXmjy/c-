#include<bits/stdc++.h>
using namespace std;

unordered_map<int,int> mp;

void primFactor(int n){
    for(int i=2;i*i<=n;i+=2){
        int cnt=0;
        while (n%i==0)
        {
            cnt++;
            n/=i;
        }
        mp[i]=cnt;
    }
    if(n>1) mp[n]=1;
}

int commonDivisor(int a,int b){
     primFactor(a);
     int res=1;

     for(auto k:mp){
        int cnt =0;
        int key=k.first;
        int value=k.second;
        while (b%key==0)
        {
            b/=key;
            cnt++;
        }

        res*=(min(cnt,value)+1);

     }

     return res;
}

int main(int argc, char const *argv[])
{   cout<<commonDivisor(12,24);


    return 0;
}
