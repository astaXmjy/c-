#include<iostream>
#include<concepts>
// template <typename T>
// concept MyIntegral=std::is_integral_v<T>;


/* template <typename T>
requires MyIntegral<T>
T add(T a,T b)
{
    return a+b;
} */
/* template <MyIntegral T>
T add(T a,T b)
{
    return a+b;
}*/
template <typename T>
concept multipliable=requires(T a,T b)
{
    a*b;
};
template <typename T>
requires multipliable<T>
T add_1(T a,T b)
{
    return a+b;
}

template <typename A>
concept increment=requires(A a, A b)
{
    a+=1;
    ++a;
    a++;
};
template<typename A>
requires increment<A>
A add_2(A a,A b)
{
    return a+b;
}
int main(int argc, char const *argv[])
{
     int x{3};
    int y{6};
    // if instead of passing an int arg we pass doble or any other it gives us compiler error
    //std::cout<<add(x,y);
    // now if we multipliable concept  than we use only arguments which is multipliable we cant use character
    std::cout<<add_1(x,y);
    std::cout<<add_2(x,y);

    return 0;
}
