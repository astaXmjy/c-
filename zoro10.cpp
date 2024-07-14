#include <iostream>
using namespace std;
class number
{
public:
    int a{0};

public:
    number() {}
    number(int num)
    {
        a = num;
    }
    number(number &obj)
    {
        cout << "Copy constructor called!!!____" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The object is : " << a << endl;
    }
};
int main(int argc, char const *argv[])
{
    number x(46);
    x.display();
    number z(x);
    z.display();

    return 0;
}
