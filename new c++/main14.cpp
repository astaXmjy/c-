#include <iostream>
#include <string>
class person
{
public:
    person()
    {
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
class pirate : private person // now all members of person class are private
{
public:
    pirate()
    {
    }
    pirate(std::string strngth, std::string role_Z)
    {
        strength = strngth;
        role = role_Z;
    }
  public:
  using person::get_bounty;  // using this now we can make them usable from derive class

  using person::set_bounty;   // this is called resurrecting 
  
  using person::bounty;

public:
    std::string strength{"not available"};
    std::string role{"unknown"};
};

int main(int argc, char const *argv[])
{
    pirate p;
    std::cout<<p.bounty;
    // this is now in accesible bcoz our class specifier is now protected______std::cout << p.get_name();
    return 0;
}
