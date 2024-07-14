#include<bits/stdc++.h>
using namespace std;
class mathexception
{
    public:
    mathexception(const string& err)
    {
        errmsg=err;
    }
    string getError(){return errmsg;}
    private:
    string errmsg;
};
class zerodivide:public mathexception
{
    public:
    zerodivide(const string& err): mathexception(err){}
};
class NegativeRoot:public mathexception
{
    public:
    NegativeRoot(const string& err)
    :mathexception(err){}
};
class operation
{
    public: 
    int x;
    int y;
    operation(int xp,int yp)
    {
        x=xp;
        y=yp;
    }
    void print_division( )
    {
          if (y==0)
          {
             throw zerodivide("Divide by zero is not possible");
          }
          else
          {
             cout<<x/y<<endl;
          }
          
          
    }
};
int main(int argc, char const *argv[])
{
    operation x(4,0);
    try
    {
        x.print_division();
    }
    catch(zerodivide& zde){}
    catch(mathexception& me){}
    
    return 0;
}

