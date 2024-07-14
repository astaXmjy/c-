#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
         // 2 3 7 8 9
        // [3 8] = 0 1 0 1 0
        int arr[]={2,3,7,8,9};
        int len=sizeof(arr)/sizeof(int);
        int mask=0;
        for (  mask = 0; mask <(1<<len); mask++)
        {
            for (int i = 0; i<len; i++)
            {
                if ((mask & (1<<i))!=0)
                {
                    cout<<arr[i] <<" ";
                }
                
            }
            cout<<endl;
        }
        cout<<mask<<endl;
        cout<<(1<<0);
    return 0;
}
