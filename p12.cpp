#include<iostream>
using namespace std;
int linear_fib(int n)
{
    if (n<=1)
    {
        return (n,0);
    }
    else
    {  int i;
        int j;
      (i,j)=  linear_fib(n-1);

        return (i+j,i);
    }
    
    
}
int main()
{
    cout<<linear_fib(3)<<"\n";
    cout<<linear_fib(4)<<"\n";
    cout<<linear_fib(5)<<"\n";

}