#include<bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
    unordered_map<char,int> mp1;
    mp1['a']=1;
    mp1['b']=1;

    unordered_map<char,int> mp2;
    mp2['a']=1;
    mp2['b']=1;

    bool ans= mp1==mp2;

    cout<<ans;
    return 0;
}
