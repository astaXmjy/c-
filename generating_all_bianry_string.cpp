#include<bits/stdc++.h>
using namespace std;

int a[2];

void PrintArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
          cout<<a[i]<<" ";
    }
    cout<<endl;
}

void BinaryK(int n,int k)
{
    if (n<1)
    {
        PrintArray(a,2);
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            a[n-1]=i;
            BinaryK(n-1,k);
        }
        
    }
}

int main(int argc, char const *argv[])
{
    int n=2;int k=3;
    BinaryK(n,k);
    return 0;
}
