#include<bits/stdc++.h>
using namespace std;
void printArray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    
}
void Binary(int a[],int n,int i)
{
    if(i==n)
    {
        printArray(a,n);
        return ;
    }
    else
    {
        a[i]=0;
        Binary(a,n,i+1);
        a[i]=1;
        Binary(a,n,i+1);
    }
      
}
int main(int argc, char const *argv[])
{  int a[4];

    Binary(a,4,0);
    return 0;
}
