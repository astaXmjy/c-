#include<iostream>
#include<string>
using namespace std;

class Pirate{
    string Name;
    public:
       
       string set()
       {
        Name="Zoro";
       }
       friend class Display;
};
class Display
{
    public:
     string  show_name(Pirate o1)
     {
         cout<<"The Name Of Legend Pirate Is : "<<o1.Name;
     }
};
int main(int argc, char const *argv[])
{   Pirate o1;
o1.set();
    Display l;
    l.show_name(o1);
    return 0;
}
