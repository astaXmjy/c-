#include<bits/stdc++.h>
using namespace std;

bool pairSumUsing2Pointer(vector<int> & arr,int size,int target){
    int i=0;
    int j=size-1;


     while (i<j)
     {
        if(arr[i]+arr[j]==target){
            return true;
        }
        else if(arr[i]+arr[j]<target)
        {
            i++;
        }

        else{
            j--;
        }
     }
     
    return false;
}


int main(int argc, char const *argv[])
{
 vector<int> arr = { 2, 3, 5, 8, 9, 10, 11 };
 int val = 17;
 int arrSize = arr.size();
  sort(arr.begin(), arr.end());

  cout<<pairSumUsing2Pointer(arr,arrSize,val);
}
