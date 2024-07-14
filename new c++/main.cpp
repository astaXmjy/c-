#include<iostream>
#include<concepts>
template <typename T> T add(T a, T b)
requires std::integral<T>
{
    return a+b;
}
int main(int argc, char const *argv[])
{  int x{2};
int y{4};
double w{3.4};
double q{3.5};

std::cout<<add(x,y);
    
    return 0;
}

