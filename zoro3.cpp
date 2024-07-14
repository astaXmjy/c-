#include<iostream>
#include<string>
using namespace std;
class shop
{
    private:
      int item_id[50];
      int item_price[50];
      int counter;
   public:
     void initcouter(void)
     {
        counter =0;
     }   
  void set_price(void)
  {
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> item_id[counter];
    cout << "Enter Price of your item" << endl;
    cin >> item_price[counter];
    counter++;
  }
  void dispaly_price(void)
  {
    for (int i = 0; i < counter; i++)
    {
         cout << "The Price of item with Id " << item_id[i] << " is " << item_price[i] << endl;
    }
    
  }
};
int main(int argc, char const *argv[])
{
    shop luffy;
    luffy.initcouter();
    luffy.set_price();
    luffy.set_price();
    luffy.set_price();
    luffy.set_price();
    luffy.set_price();
    luffy.dispaly_price();
    return 0;
}
