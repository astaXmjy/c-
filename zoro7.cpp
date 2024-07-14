#include<iostream>
using namespace std;
class  Complex;
class Calculator
{
    public:
     int add(int a,int b)
     {
        return (a+b);
     }
     int sumreal(Complex,Complex);
     int sumcomplex(Complex,Complex);
};
class Complex
{
  
   int a,b;
  friend class Calculator;
   public:
   
     void set_num(int n1,int n2 )
     {   a=n1;
     b=n2;

     }
     void print_num()
     {
        cout<<a<<"+"<<b<<"i"<<endl;
     }

};
int Calculator:: sumreal(Complex o1,Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator:: sumcomplex(Complex o1,Complex o2)
{
    return (o1.b + o2.b);
}
int main(int argc, char const *argv[])
{  Complex o1,o2;
    o1.set_num(3,4);
    o2.set_num(4,7);
    Calculator calc;
    int res=calc.sumreal(o1,o2);
    cout<<res<<endl;
    int resc=calc.sumcomplex(o1,o2);
    cout<<resc;
    
    return 0;
}
