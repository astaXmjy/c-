#include<iostream>
#include<string>

using namespace std;
class Cnode
{
    private:
    string elem;
    Cnode* next;
    friend class Cll;
};
class Cll
{ public:
   Cll()
   :cursor(NULL)
   {}
   ~Cll()
   {  while (!empty())
   {
       remove();
   }}
   bool empty()
   {
    return cursor==NULL;
   }
   const string& back()const{
    return cursor->elem;
   }
const string&  front()const{
    return cursor->next->elem;
}

void adavance()
{
    cursor=cursor->next;
}
void add(const string& e)
{
    Cnode* v=new Cnode;
    v->elem=e;
    if (cursor==NULL)
    {
        v->next=v;
        cursor=v;
    }
    else
    {  v->next=cursor->next;
        cursor->next=v;
    }
    
}
void remove()
{
    Cnode* old=cursor->next;
    if (old==cursor)
    {
        cursor=NULL;
    }
    else
    {
        cursor->next=old->next;
    }
    delete old;
    
    
}
   
   private:
   Cnode* cursor;

};
int main(int argc, char const *argv[])
{ 
     // Hii i am zoro(AAdarsh yadav) and im gonna tell u how playlist of song works using c++

    Cll playlist;

    // adding song to playlist

    playlist.add("Dheere se meri zindagi ___");
    playlist.add("high heels");
    playlist.add("Brother anthem");

// this is used to change song one by one automattically or manually
    playlist.adavance();
    playlist.adavance();

    // removing song from playlist
    playlist.remove();

    playlist.add("Tere jaisa yaar khaa__");
    return 0;
}
