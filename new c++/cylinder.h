#ifndef CYLINDER_H
#define CYLINDER_H

#include "constants.h"

class cylinder
{
private:
    double base_radius{1};
    double height{1};

public:
    cylinder() = default;

    cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }
    double volume()
    {
        return pi * base_radius * base_radius * height;
    }
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }
    void set_base_radius(double radius_param)
    {
        base_radius = radius_param;
    }
    void set_height(double height_param)
    {
        height = height_param;
    }
};
#endif