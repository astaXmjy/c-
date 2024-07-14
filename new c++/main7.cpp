#include<iostream>
const double pi{3.14141};
class cylinder
{
private:
    double base_radius{1};
    double height{1};
public:
    cylinder()=default;
    cylinder(double radius_param,double height_param)
    {
        base_radius=radius_param;
        height=height_param;
    }
    double volume(){
        return pi*base_radius*base_radius*height;
    }
    
};



int main(int argc, char const *argv[])
{
    cylinder cylinder1;
    std::cout<<cylinder1.volume();

    return 0;
}
