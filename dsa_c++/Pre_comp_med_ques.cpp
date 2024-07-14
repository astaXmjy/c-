#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
int arr[N];
int main(int argc, char const *argv[])
{
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int a,b,d;
        cin>>a>>b>>d;
        arr[a]+=d;
        arr[b]-=d;
    }
    for (int i = 1; i <=n; i++)
    {
        arr[i]=arr[i]+arr[i-1];
    }
    long long mx=INT_MIN;
    for (int i = 1; i <=N; i++)
    {
        if (mx<arr[i])
        {
            mx=arr[i];
        }
        
    }

    cout<<mx<<endl;
    
    

    return 0;
}
