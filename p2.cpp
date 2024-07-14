#include<iostream>
#include<string>
 
using namespace std;

int sum(int n)
{   int sum_n=0;

  for (int i = n-1; i >0; i--)
  {
      sum_n+=i;
  }
  
   return sum_n;

}

int sum_rec(int n)
{
    if (n==0 )
    {
        return 0;
    }
    else if (n==1)
    {
        return 1;
    }
    else
    {
        return n-1+sum(n-1);
    }
    
    
}
int main(int argc, char const *argv[])
{
  // using iterative approach
  cout<<sum(5)<<"\n";
  cout<<sum_rec(5);

    return 0;
}
