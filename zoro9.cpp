#include<iostream>
using namespace std;
class complex
{
    public:
      int a{4};
      int b{6};
    public:
    complex()=default;  //  give variables as intital
       complex(int x,int y);  
       void print()
       {
           cout<<a<<" + "<<b<<"i"<<endl;
       }
};
complex::complex(int x,int y)
{
    a=x;
    b=y;
}
int main(int argc, char const *argv[])
{
    complex o1(33,55);
    o1.print();
    complex o2; // calling default constructor
    o2.print();
    
    return 0;
}
