#include<bits/stdc++.h>
using namespace std;

int a[4];
void PrintArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i];
    }
    cout<<endl;
    
}
void Binary(int n)
{
    if (n<1)
    {
        PrintArray(a,4);
    }
    else
    {
        a[n-1]=0;
        Binary(n-1);
        a[n-1]=1;
        Binary(n-1);
    }
                                                                  
    
}

int main(int argc, char const *argv[])
{
    int n=4;
    Binary(n);
    return 0;
}
