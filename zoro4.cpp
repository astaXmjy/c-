#include<iostream>
#include<string>

using namespace std;

class  pirate
{  private:

    string name;
    int level;
    public:
      void set_name_lvl(void)
      {
        cout<<"Enter the name :"<<endl;
        cin>>name;
        cout<<"Enter the lvl : "<<endl;
        cin>>level;
      }
      void get_name_lvl(void)
      {
        cout<<"The pirate name is : "<<name<<endl;
        cout<<"The power lvl of pirate is : "<<endl;
      }
    

}
;
int main(int argc, char const *argv[])
{   pirate inf[5];
 for (int i = 0; i < 5; i++)
    {
        inf[i].set_name_lvl ();
        inf[i].get_name_lvl();
    }
    
    return 0;
}
