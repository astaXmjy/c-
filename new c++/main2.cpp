#include<iostream>
#include<concepts>
// simple requirements
template <typename T>
concept tinytype=requires(T a, T b)
{
    sizeof(T)<=4; // only enforces syntax
    // it works if it is false 
};
template <typename T>
requires tinytype<T>
T add(T a,T b)
{
    return a+b;
}
//  * Nested requirements
template <typename A>
concept chotatype=requires(A a,A b)
{
      sizeof(A)<=4;
      requires sizeof(A)<=4;// now this work only if condition is satisfied
};
template <typename A>
requires chotatype<A>
A add_1(A a,A b)
{
    return a+b;
}
// compound requirement
template <typename D>
concept addable=requires(D a,D b)
{
    {a+b}->std::convertible_to<int>;
};
addable auto add_3(addable auto a,addable auto b)
{
    return a+b;
}
int main(int argc, char const *argv[])
{
     double x{3.4};
     double y{3.56};
      add(x,y);
     // add_1(x,y); ____if we use this then we get compiler error bcoz size of double >4
     add_3(x,y);
     // this works only if arguments is convertible to int
    return 0;
}
