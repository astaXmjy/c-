#include<bits/stdc++.h>
using namespace std;

bool find3sum(int a[],int size,int sum ){
    int l,r;

    sort(a,a+size);

    for (int i = 0; i <size-2; i++)
    {
          l=i+1;
          r=size-1;

          while (l<r)
          {
            if (a[i]+a[l]+a[r]==sum)
            {
                return true;

            }

            else if(a[i]+a[l]+a[r]<sum) l++;

            else r--;


          }

    }

    return false;



}

vector<vector<int>> sum4(vector<int>&nums,int target)
{
    int n=nums.size();
    sort(nums.begin(),nums.end());
    vector<vector<int>> output;

    for (int i = 0; i < n-3; i++)
    {
        for (int j = i+1; j < n-2; j++)
        {

               long long newtarget=(long long)target-(long long)nums[i]-(long long)nums[j];

               int  low=j+1,high=n-1;

               while (low<high)
               {
                if(nums[low]+nums[high]<newtarget){
                    low++;
                }
                else if (nums[low]+nums[high]>newtarget)
                {
                    high--;
                }
                else
                {
                    output.push_back({nums[i],nums[j],nums[low],nums[high]});
                    int tempindex1=low,tempindex2=high;

                    while (low<high && nums[low]==nums[tempindex1])
                    {
                        low++;
                    }
                    while (low<high && nums[high]==nums[tempindex2])
                    {
                        high--;
                    }


                }

                
               }
               while (j+1<n && nums[j]==nums[j+1])
               {
                 j++;
               }


        }
        while(i+1<n && nums[i]==nums[i+1])  i++;

    }

    return output;

}

int main(int argc, char const *argv[])
{
    int a[]={1,4,45,6,10,8};

    int sum =22;

    int size=sizeof(a)/sizeof(int);

    cout<<find3sum(a,size,sum);
    return 0;
}
