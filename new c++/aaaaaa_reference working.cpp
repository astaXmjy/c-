#include<iostream>
void change(int& y)
{
    y=y*4;
}
int main(int argc, char const *argv[])
{
     int x{45};
     int & ref{ x};
     change(x);   
     change(ref);
     std::cout<<x;
     
    return 0;
}
