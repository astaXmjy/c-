#include <iostream>
const double pi{3.14};
class cylinder
{
    // behaviour
public:
   /* cylinder()
    {
        base_radius = 2.0;
        height = 2.0;
    }
    cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }*/
    double volume()
    {
        return pi * base_radius * base_radius * height;
    }
    // properties
private:
    double base_radius;
    double height;
};
int main(int argc, char const *argv[])
{
   //cylinder cylinder1;
  // std::cout<<"volume :"<<cylinder1.volume()<<std::endl;
 //  cylinder cylinder1(10,4);
  // std::cout<<"volume :"<<cylinder1.volume()<<std::endl;
  cylinder cylinder1;
  std::cout<<"volume :"<<cylinder1.volume()<<std::endl;

    return 0;
}
