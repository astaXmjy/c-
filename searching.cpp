#include<bits/stdc++.h>
using namespace std;
int linear_search(int arr[],int size,int data)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==data)
        {
            return i;
        }
        
    }
    return -1;
}
int binarysearch(int arr[],int data,int size)
{
    int low=0;
    int high=size-1;
    int mid=(low+(high-low)/2);
    while(low<=high){

         mid=(low+(high-low)/2);
    if (arr[mid]==data)
    {
        return mid;
    }
    else if (data<arr[mid])
    {
        high=mid-1;
    }
    else
    {
        low=mid+1;
    }
    
    }


    return -1;
    
}
int rec_binary_search(int arr[],int low,int high,int data)
{  int mid=low+(high-low)/2;
if (low>high)
{
    return -1;
}
if (arr[mid]==data)
{
    return mid;
}
else if (arr[mid]<data)
{
    return rec_binary_search(arr,mid+1,high,data);
}
else
{
    return rec_binary_search(arr,low,mid-1,data);
}
return -1;
    
}
int interplotationSearch(int arr[],int data,int size)
{
    int low=0,mid,high=size-1;
   while (low>=high)
   {
      mid=low+((data -arr[low])*(high -low))/(arr[high]-arr[low]);
      if (data==arr[mid])
      {
         return mid;
      }
      if (data<arr[mid])
      {
          high=mid-1;
      }
      else
      {
        low=mid+1;
      }
      
      
   }
   return -1;
   
    
    

}
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,56,676};

    return 0;
}
