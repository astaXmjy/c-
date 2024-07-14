#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int x;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        ans^=x;
    }
    
    cout<<ans;
    return 0;
}
