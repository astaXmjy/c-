#include<iostream>
#include<concepts>
std::integral auto add(std::integral auto a,std::integral auto b){
    return a+b;
}
int main(int argc, char const *argv[])
{
  //  add(10.1,7);
std::integral auto x=add(2,3);
// std::floating_point auto x=add(2,3); _______errror
    return 0;
}
