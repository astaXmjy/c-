#include<bits/stdc++.h>
using namespace std;
void printBinary(int num)
{
    for (int i = 10; i >=0; i--)
    {
        cout<<((num >>i)&1);
    }

    cout<<endl;
    
}
int main(int argc, char const *argv[])
{
    printBinary(5);
     int a=5;
     int ans=5&(1<<2);
     cout<<ans;

    return 0;
}

