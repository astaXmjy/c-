#include<iostream>
using namespace std;
class Complex
{
  private:
   int a,b;
   public:
   friend Complex sumcomplex(Complex o1,Complex o2);
     void set_num(int n1,int n2 )
     {   a=n1;
     b=n2;

     }
     void print_num()
     {
        cout<<a<<"+"<<b<<"i"<<endl;
     }

};
Complex sumcomplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.set_num((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}
int main(int argc, char const *argv[])
{
    Complex o1,o2,sum;
    o1.set_num(4,5);
    o1.print_num();
    o2.set_num(3,4);
    o2.print_num();
    sum=sumcomplex(o1,o2);
    sum.print_num();
    

    
    return 0;
}
