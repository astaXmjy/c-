#include<bits/stdc++.h>
using namespace std;
int find_max_cross_subbarray(int* a,int low,int mid,int high)
{    int max_left{0};
    int left_sum=numeric_limits<int>::infinity();
    int sum{0};
    for ( int i = mid; i >=0; i--)
    {
        sum=sum+a[i];
        if (sum>left_sum)
        {
            left_sum=sum;
            max_left=i;

        }
        
    }
    sum=0;
     int right_sum=numeric_limits<int>::infinity();
    int max_right{0};
    for (int j = mid; j < high; j++)
    {
        sum=sum+a[j];
        if (sum>right_sum)
        {
            right_sum=sum;
            max_right=j;
        }
        
    }
    return (max_left,max_right,left_sum+right_sum);
}
int main(int argc, char const *argv[])
{  //  eg of change in stock price of any share and use this info to buy and sell share for profit
    int dx_price[]={13,-3,-25,20,-3,-16,-23,18,20,-7,12,-5,-22,15,-4,7};
    int high=sizeof(dx_price)/sizeof(int);
    int mid=(high+0)/2;
    cout<<mid<<endl;
    int x,y,z;
   (x,y,z) =find_max_cross_subbarray(dx_price,0,mid-1,high);
    cout<<x<<" "<<y<<" "<<z;
    
    return 0;
}
