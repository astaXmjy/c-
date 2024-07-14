#include <iostream>
#include <string>
class person
{
public:
    person()
    {      
        std::cout<<"default constructor called for an person class"<<std::endl;
    }
    person(std::string name_param, int bounty_param)
    {
        bounty = bounty_param;
        name = name_param;
    }
    // getters
    std::string get_name()
    {
        return name;
    }
    int get_bounty()
    {
        return bounty;
    }
    // setters
    void set_name(std::string name_x)
    {
        name = name_x;
    }
    void set_bounty(int bounty_y)
    {
        bounty = bounty_y;
    }

public:
    int bounty{0};
    std::string name{"none"};
};
class pirate : public person // now all members of person class are private
{
public:
    pirate()
    {    
        std::cout<<"default constructor for pirate called____"<<std::endl;
    }
    pirate(std::string strngth, std::string role_Z)
    {
        strength = strngth;
        role = role_Z;
    }


public:
    std::string strength{"not available"};
    std::string role{"unknown"};
};

int main(int argc, char const *argv[])
{
    pirate p;
    
    // this is now in accesible bcoz our class specifier is now protected______std::cout << p.get_name();
    return 0;
}