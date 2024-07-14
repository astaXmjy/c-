#include<iostream>
using namespace std;

int sum_odd(int n)
{
    if (n==0)
    {
        return 0;
    }
    else if (n==1)
    {
       return 1;
    }
    else
    {
        if (n%2==0)
        {
            return n-1+sum_odd(n-2);
        }
        else
        {
            return n-2 +sum_odd(n-3);
        }
        
    }
    
    
}
int main(int argc, char const *argv[])
{

cout<<  sum_odd(6);

cout<<"\n";

cout<< sum_odd(5);

cout<<"\n";

cout<< sum_odd(7);

return 0;   

}
