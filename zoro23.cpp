#include<iostream>
using namespace std;
template <typename E>
class Snode{
    private:
    E elem;
    Snode<E> *next;
    friend class  SlinkedList<E>;
};
template <typename E>
class SLinkedList
{
    public:
    SLinkedList();
    ~SLinkedList();
    bool empty()const;
    const E&front()const;
    void addFront(const E& e);
    void removeFront();
    void print_ll();
    public:
    Snode<E>* head;
};

template <typename E>
SLinkedList<E>::SLinkedList()
:head(NULL){}

template <typename E>
SLinkedList<E>::~SLinkedList()
{
   while (!empty()) removeFront();
}

template <typename E>
bool SLinkedList<E>:: empty()const
{
   return head==NULL;
}

template <typename E>
void SLinkedList<E>:: addFront(const E&e)
{
    Snode<E>*v=new Snode<E>;
    v->elem=e;
    v->next=head;
    head=v;
}

template <typename E>
void SLinkedList<E>:: removeFront()
{
    Snode<E>* old=head;
    head=old->next;
    delete old;
}

template <typename E>
const E& SLinkedList<E>::front() const 
{ return head->elem; }

template  <typename E>
void SLinkedList<E>::print_ll()
{   Snode<E>*q=head;
    while (q!=NULL)
    {
        cout<<q->elem;
        q=q->next;
    }
    
}
int main(int argc, char const *argv[])
{
     SLinkedList<string> a;
     a.addFront("bsdk");
     SLinkedList<int> b;
     b.addFront(10);
     SLinkedList<string> c;
     c.addFront("baar");

     //c.print_ll();

    return 0;
}
