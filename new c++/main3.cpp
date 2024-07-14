#include<iostream>
#include<concepts>
template <typename T>
concept tinytype=requires(T t)
{
    sizeof(T)<=4;
    requires sizeof(T)<=4;
};
template <typename T>
//requires std::integral<T>||std::floating_point<T> ------1
// requires std::integral<T>&&tinytype<T> _________2
requires std::integral<T>&&requires(T t){
    sizeof(T)<=4;
    requires sizeof(T)<=4;
}
T add(T a,T b)
{
    return a+b;
}
int main(int argc, char const *argv[])
{
    float x{48.4};
    float y{45.55};
   // add(x,y); // this gonna work becoz arg either may be int or float type if we use 1
    // this doesnt work bcoz size of float >4 if we use 2

int a{2};
int b{4};
add(a,b);// this gonaa work for 3 bcoz its satisfy all condition

    return 0;
}
