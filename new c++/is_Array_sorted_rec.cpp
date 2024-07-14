#include<bits/stdc++.h>
using namespace std;
int isArrayInSorted(int n,int* arr)
{
    if (n==1)
    {
        return 1;
    }
    return (arr[n-1]<arr[n-2])?0:isArrayInSorted(n-1,arr);
    
}

int main(int argc, char const *argv[]) // ZORO .... LUFFY
{
    int arr[]={1,2,3,4,455,6};
    cout<<isArrayInSorted(6,arr);
    return 0;
}
