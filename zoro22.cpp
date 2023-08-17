#include<iostream>  
#include<string>
using namespace std;
class StringNode
{
    private:
    string elem;
    StringNode *next;
    friend class StringLinkedList;
};
class StringLinkedList
{
   public:
   StringLinkedList();
   ~StringLinkedList();
   bool empty()const;
   const string& front()const;
   void addFront(const string& e);
   void removeFront();
   void print_ll();
   private:
   StringNode* head;
};

// Constructor

StringLinkedList::StringLinkedList()
:head(NULL){}

//Destructor

StringLinkedList::~StringLinkedList()
{   while (!empty()) removeFront();}

bool StringLinkedList::empty()const
{return head==NULL;}

const string& StringLinkedList::front()const
{
    return head->elem;
}

void StringLinkedList:: addFront(const string& e)
{
   StringNode * v=new StringNode;
   v->elem=e;
   v->next=head;
   head=v;
}
void StringLinkedList::removeFront()
{
    StringNode *old=head;
    old->next=head;
    delete old;
}

void StringLinkedList:: print_ll()
{
    StringNode* p=head;
    while (p!=NULL)
    {
        cout<<p->elem<<" ";
        p=p->next;
    }
    
}  
void LLreversal(StringLinkedList & l)
{
     StringLinkedList T;
     while (!l.empty())
     {
        string s=l.front();  l.removeFront();
        T.addFront(s);
     }
    
     
}

int main(int argc, char const *argv[])
{    
    StringLinkedList x;
    x.addFront("bsdk"); 
    x.addFront("madarchood");
    x.addFront("chutiya");
    x.addFront("lund lele");
    x.removeFront();
    x.print_ll();
    return 0;
}
