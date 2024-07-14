#include <bits/stdc++.h>
using namespace std;
int getLargestRect(vector<int> arr)
{    int j;
    int maxArea = 0;
    for(int i = 0 ;i< arr.size(); i+=1)
    {     int minvalue=arr[i];
       int maxvalue=arr[i];
       j=i-1;
          while (j>=0)
          {
                  if (arr[j]<minvalue)
                  {
                     minvalue=arr[j];
                  }
                  if (minvalue*(i-j+1)>maxvalue)
                  {
                     maxvalue=minvalue*(i-j+1);
                  }
                  if (maxvalue>maxArea)
                  {
                     maxArea=maxvalue;
                  }
                  
                  j--;

          }


    }
       return maxArea;
}

int main(int argc, char const *argv[])
{  vector<int> arr{2};
     cout<<getLargestRect(arr);
    return 0;
}
