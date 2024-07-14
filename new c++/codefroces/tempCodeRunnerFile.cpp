#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(((a<c and a>d)or(a>c and a<d))and((b<c and b<d)or(b>c and b>d))){
            cout<<"YES"<<endl;
        }
        else if(((b<c and b>d)or(b>c and b<d))and((a<c and a<d)or(a>c and a>d))){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}