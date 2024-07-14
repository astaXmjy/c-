#include<iostream>
using namespace std;
void print_reverse(int *arr,int size)
{    
    for ( int i = size-1; i >=0; i--)
    {
        cout<<arr[i]<<" ";
    }
    
  
}
int main(int argc, char const *argv[])
{
    int arr[]={3,4,5,6,7,3,22,2222};
    int size=sizeof(arr)/sizeof(int);
    

    return 0;
}
