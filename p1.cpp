#include<iostream>
#include<algorithm>
using namespace std;

int max(int *arr,int n)
{  int i=0;
    int max=arr[i];
    for ( i = 1; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    return max;
    
} 
int min(int *arr,int n)
{   int i=0;
    int min=arr[i];
    for ( i = 1; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        
    }

    return min;
    
}

int rec_min(int * arr,int n)
{
    int min;
    if (n==1)
    {
        return min=arr[0];
    }
    else
    {
        return min=arr[n]<rec_min(arr,n-1)?arr[n]:rec_min(arr,n-1);
    }
    
}
int rm(int *arr,int n)
{
    int min;
    if (n==1)
    {
        return min=arr[n-1];
    }
    else
    {
        if (arr[n]<rm(arr,n-1))
        {
            return min=arr[n];
        }
        else
        {
            return min=rm(arr,n-1);
        }
        
    }
    
}
int rec_max(int * arr,int n)
{
    int max;
    if (n==1)
    {
        return max=arr[0];
    }
    else
    {
        return max=arr[n]>rec_max(arr,n-1)?arr[n]:rec_max(arr,n-1);
    }
    
    
}
int main(int argc, char const *argv[])
{
     int arr[7]={5,66,44,22,3,332,93};

// using iterative approach

  printf("%d",rm(arr,7));

    return 0;
}
