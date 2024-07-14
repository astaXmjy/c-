#include<iostream>
#include<string>
class
    person
{
    friend std::ostream &operator<<(std::ostream &out, const person &person)
    {
        out << "person[" << person.first_name << " " << person.last_name << "]";
        return out;
    }

public:
    person(){

    }
    person(std::string first_name_param, std::string last_name_param)
      : first_name(first_name_param),last_name(last_name_param)
      {
      }

      // getters
      std::string get_first_name() const
      {
          return first_name;
      }
      std::string get_last_name() const
      {
          return last_name;
      }
      // setters
      void set_first_name(std::string x)
      {
        first_name=x;
      }
      void set_last_name(std::string y)
      {
        last_name=y;
      }

  protected:
      std::string first_name{"mysterious"};
      std::string last_name{"person"};
};




class player: public person{
    friend std::ostream& operator <<(std::ostream& out, const player& player){
        out<< "player :[ game :"<<player.m_game<<" names :"
        <<player.get_first_name()
        <<" "<<player.get_last_name()<< "]";
        return out;

    }
    public:
    player()=default;
    player(std::string game_param,std::string first_name_param,std::string last_name_param)
    
    {      m_game=game_param;
           first_name=first_name_param;
           last_name=last_name_param;
    }

    private:
        std::string m_game{"none"};
};
int main(int argc, char const *argv[])
{
    player p1("volleyball","ANDRO","MEDA");
    std::cout<<"player :"<<p1<<std::endl;
    return 0;
}
