#include<iostream>
#include<string>
using namespace std;
class binary
{  private:
     string s;
     void chk_bin(void);
   public:
      void read(void);
      void ones_comp(void);
      void display(void);

};
void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_comp(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
        
    }
    
}
void binary:: display(void)
{
    cout<<"DISPLAYING BINARY NUMBER______: ";
    for (int i = 0; i <s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
    
}
int main(int argc, char const *argv[])
{
    binary zoro;
    zoro.read();
    zoro.display();
    zoro.ones_comp();
    zoro.display();

    return 0;
}


