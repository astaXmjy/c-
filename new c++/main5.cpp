#include<iostream>
const double pi{3.14};
class cylinder{
    public:
       // functions (method)
            double volume(){
            return pi*base_radius*base_radius*height;
    }
    //Member variables
    public:
    double base_radius;
    double height;
};





int main(int argc, char const *argv[])
{   cylinder cylinder1;
std::cout<<"Volume :"<<cylinder1.volume()<<std::endl;
    cylinder1.base_radius=1;
    cylinder1.height=4;
    std::cout<<"Volume :"<<cylinder1.volume()<<std::endl;
    return 0;
}
