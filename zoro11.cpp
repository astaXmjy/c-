#include <iostream>
using namespace std;
#include <string>
#include <memory>

// dynamic binding required more memory :

class shape
{
public:
    string discription{""};
    shape() {}
    ~shape() {}
    shape(string x)
    {
        discription = x;
    }
    virtual void draw()
    {
        cout << "Shape::draw() called. Drawing " << discription << endl;
    }
    virtual void draw(int color_depth) const
    {
        std::cout << "Shape::Drawing with color depth : " << color_depth << std::endl;
    }
};
class oval : public shape
{
public:
    int radius_x{0};
    int radius_y{0};

public:
    ~oval() {}
    oval() {}
    oval(int x, int y, string z)
        : shape(z), radius_x(x), radius_y(y) // initializing here
    {
    }
    virtual void draw() override
    {
      cout<<"Circle::oval() called. Drawing "<<discription<<" with major axis "<<radius_x<<" and minor axis "<<radius_y<<endl;
    }
    virtual void draw(int color_depth, std::string color) const
    {
            std::cout << "Drawing with color depth : " << color_depth
            << " and color : " << color << std::endl;
        } 
};
class circle : public oval
{
public:
    int radius{0};
    circle() {}
    ~circle() {}
    circle(string z, int r)
        : oval(r, r, z), radius(r)
    {
    }
      virtual void draw() override {
    cout << "Circle::draw() called. Drawing " << discription << "  with radius : " << radius << endl;
        }  
};

void draw_shape(shape *s)
{
    s->draw();
}

int main()
{
   shape * shape1=new circle("circle1",5);




    return 0;
}