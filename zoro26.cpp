#include <iostream>
using namespace std;
// making scale
void  drawonetick(int ticklength,int ticklabel =-1)
{
    for (int i = 0; i < ticklength; i++)
    {
        cout<<"-";
    }
    if (ticklabel>=0)
    {
        cout<<" "<<ticklabel;
    }
    cout<<"\n";

}

void drawticks(int ticklength)
{
    if (ticklength>0)
    {
        drawticks(ticklength-1);
        drawonetick(ticklength);
        drawticks(ticklength-1);
    }
    
}

void drawruler(int inches, int majorlenght)
{
    drawonetick(majorlenght,0);
    for (int i = 1; i < inches; i++)
    {
        drawticks(majorlenght-1);
        drawonetick(majorlenght,i);
    }
    
}
int main(int argc, char const *argv[])
{
    // drawticks(5);
  drawruler(2,5);
    
    return 0;
}
