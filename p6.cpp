#include<iostream>
#include<math.h>
#include<stdbool.h>
using namespace std;

void iTp(int i)
{
    if(i&(i-1)==0)
    {
        cout<<"True \n";
    }
    else
    {
        cout<<"False \n";
    }
    
}
 bool is_tp(int i)
 {
    if (i==0)
    {
        return 0;
    }
    else
    {
        while (i!=1)
        {
            if (i%2!=0)
            {
                return 0;
            }
            i=i/2;
        }
        
    }
    return 1;
    
 }

bool isPowerOfTwo(int n)
{
    return (ceil(log2(n)) == floor(log2(n)));
}
int main(int argc, char const *argv[])
{
    isPowerOfTwo(6)? printf("Yes\n") : printf("No\n");
     isPowerOfTwo(8)? printf("Yes\n") : printf("No\n");

     iTp(21);

     is_tp(67)?printf("yes \n"):printf("no \n");
    return 0;
}
