#include<iostream>
using namespace std;
#include<string>
class flower
{
    private:
    string name{"none"};
    int petals{0};
    float price{0};

    public:
    friend ostream& operator<<(ostream& out,const flower & f)
    {
        out<<f.name<<" "<<f.petals<<" "<<f.price<<endl;
        return out;
    }
    flower(){}
    flower(string x,int y,float z)
    {
        name=x;
        petals=y;
        price=z;
    }

    void set_petals(int x)
    {
        petals=x;
    }
     void set_price(float x)
    {
        price=x;
    }
    void set_name(string x)
    {
        name=x;
    }

    void get_petals()
    {
        cout<<petals;
    }

   void get_name()
   {
      cout<<name;
   }
   void get_Price()
   {
    cout<<price;
   }
};
int main(int argc, char const *argv[])
{
     flower f("chameli",5,30);
     cout<<" flower : "<<f;

    return 0;
}
