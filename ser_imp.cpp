#include<bits/stdc++.h>
using  namespace std;
int main(int argc, char const *argv[])
{
    int x=(1<<1)|(1<<3)|(1<<5)|(1<<6);
    int y=(1<<3)|(1<<4)|(1<<5)|(1<<7);
    int z=x|y;

    // for (int i = 0; i <32 ; i++)
    // {
    //     if (x&(1<<i))
    //     {
    //         cout<<i<<" ";
    //     }
        
    // }
    for (int i = 0; i < 32; i++) {
if (z&(1<<i)) cout << i << " ";
}


    return 0;
}

