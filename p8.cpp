#include<iostream>
using namespace std;

int x(double y)
{    
    int count{0};
    if(y<2)
    {
        return count;
    }
    else{
   while ((y>=2))
   {   y=y/2;
       count ++;
   }

   return count;
    }
   
    
}
int main(int argc, char const *argv[])
{
    cout<<x(12.5);
    return 0;
}
