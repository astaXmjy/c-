#include<iostream>
#include "cylinder.h"



int main(int argc, char const *argv[])
{
   
    cylinder cylinder1(7,7);
    std::cout<<cylinder1.volume();
    std::cout<<std::endl;
    cylinder* cy=new cylinder(10,45);
    std::cout<<cy->volume();
    delete cy;


    return 0;
}