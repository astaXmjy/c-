#include<iostream>
using namespace std;

// doubly linked lists
class Dnode
{
   private:
   int elem;
   Dnode* next;
   Dnode* prev;
   friend class Dll;
};
class Dll
{
    public:
   Dll()
   {
       header=new Dnode;
       trailer=new Dnode;
       header->next=trailer;
       trailer->prev=header;

   }
   ~Dll()
   {
       while (!empty())
       {
          removefront();
       }
       delete header;
       delete trailer;
       
   }
   const int & front()const
   {
    return header->next->elem;
   }
   const int & back()
   {
    return trailer->prev->elem;
   }
   int empty()
   {
     if (header->next==trailer)
     {
        return 1;
    
     }
     else
     {
        return 0;
     }
     
     
   }
   
   void addfront(const int& e)
   {
      add(header->next,e);

   }
   void add(Dnode* v,const int& e)
   {
    Dnode*u=new Dnode;
    u->next=v;
    u->prev=v->prev;
    v->prev->next=v->prev=u;
   }
  void addback(const int& e)
  {
    add(trailer,e);
  }
  void remove(Dnode* v)
  {
    Dnode* u=v->prev;
    Dnode* w=v->next;
    u->next=w;
    w->prev=u;
    delete v;
  }
  void removefront()
  {
     remove(header->next);
  }

  void removeback()
  {
    remove(trailer->prev);
  }
    private:
    Dnode* header;
    Dnode* trailer;
};

int main(int argc, char const *argv[])
{    Dll a;
  a.addfront(44);
  
     
    return 0;
}

