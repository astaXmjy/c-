#include <iostream>
#include <string>

class pirate
{
protected:
    int bounty;
    std::string name;

public:
    pirate(std::string name_param, int bounty_pram)
    {
        bounty = bounty_pram;
        name = name_param;
    }
     void display()   // if you make it virtual than  it is used by inherited classes
    {
        std::cout << "bsdk baar kyo yaad kr rha h merko" << std::endl;
    }
};
class group : public pirate
{
    int rank;

public:
    group(int rank_param, std::string name_param, int bounty_param) : pirate(name_param, bounty_param)
    {
        rank = rank_param;
    }
    void display()
    {
        std::cout << "The name of the pirate is : " << name << std::endl;
        std::cout << "The bounty of the pirate is : " << bounty << std::endl;
        std::cout << "The rank of the pirate is : " << rank << std::endl;

        std::cout << std::endl;
        std::cout << std::endl;
    }
};
class power : public pirate
{
    std::string ability;

public:
    power(std::string ability_param, std::string name_param, int bounty_param) : pirate(name_param, bounty_param)
    {
        ability = ability_param;
    }
    void display()
    {
        std::cout << "name is : " << name << std::endl;
        std::cout << "bounty is : " << bounty << std::endl;
        std::cout << "The ability of the pirate is : " << ability << std::endl;
        std::cout << std::endl;

        std::cout << std::endl;
    }
};
int main(int argc, char const *argv[])
{
    std::string name, ability;
    int bounty, rank;
    name = "zoro";
    ability = "swordsman";
    bounty = 12500000;
    rank = 7;

    group gr(rank, name, bounty);
    // gr.display();

    power po(ability, name, bounty);
    // po.display();

    pirate *pt[2];
    pt[0] = &gr;
    pt[1] = &po;

    pt[0]->display();
    std::cout<<"________________"<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::endl;
    pt[1]->display();

    return 0;
}
