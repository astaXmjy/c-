#include<iostream>
#include<string>

class dog
{
    std::string dog_name;  // by default memebers are private
};
struct cat
{
    std::string cat_name;  // by default members  are public
};

int main(int argc, char const *argv[])
{     
     dog a;
     //a.dog_name="chotu";    ----- gives error bcoz members are private in classes by default
    // std::cout<<a.dog_name<<std::endl;
    cat b;
    b.cat_name="golu";
    std::cout<<b.cat_name;
    return 0;
}
