#include<iostream>
int findoddoccuringnum(int arr[],int n)
{    
    int res=0;
    for (int i = 0; i < n; i++)
    {
        res=res^arr[i];
    }
return res;

}
int main(int argc, char const *argv[])
{
   int arr[]={3,4,2,2,2,2,4,4,3,4,5,5,5,66,66};
   int n=sizeof(arr)/sizeof(int);
   std::cout<<findoddoccuringnum(arr,n);
    return 0;
}
