#include<iostream>
using namespace std;
int sum_arr(int * arr,int n)
{
    if (n==1)
    {
        return arr[0];
    }
    return arr[n-1]+sum_arr(arr,n-1);
    
}
int* arr_rev(int * arr,int i,int j)
{
    if (i<j)
    {
       swap(arr[i],arr[j]);
       arr_rev(arr,i+1,j-1);
    }
    return arr;
}
int binarysum(int *arr,int i,int n)
{
    if (n==1)
    {
        return arr[i];
    }
    else 
    {
        return binarysum(arr,i,n/2) + binarysum(arr,i+(n/2),n/2);
    }
    
    
}
void print_arr(int *arr,int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    
}
int main()
{  

int arr[]={1,2,3,4,5,6,7};
int lenght= sizeof(arr)/sizeof(int);
cout<<sum_arr(arr,lenght)<<"\n";
arr_rev(arr,0,lenght-1);
print_arr(arr,lenght);
cout<<binarysum(arr,0,lenght);
return 0;


}