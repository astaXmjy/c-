#include<bits/stdc++.h>
using namespace std;
class x
{
   private:
   int elem;
   public:
   x(){ elem=0;}
   x(int elem){this->elem=elem;}
   int& operator*()
   {
       return this->elem;
   }
};
int main(int argc, char const *argv[])
{
    x b(574676457);
    cout<<*b<<endl;
    *b=44444;
    cout<<*b;
    return 0;
}
