#include<bits/stdc++.h>
using namespace std;

void solve(int &x,int &y){
    if(x>y){
        cout<<y<<" "<<x<<endl;
    }
    else{
        cout<<x<<" "<<y<<endl;
    }
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        solve(x,y);
    }
    return 0;
}
