#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
class Cll
{
public:
    Cll()
    {
        head = nullptr;
        tail = nullptr;
    }
    void creatNode(int value)
    {
        Node *temp = new Node;
        temp->data = value;
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            tail = temp;
            tail->next = head;
        }
    }
   void printCll()
   {
      Node* q=head;
      
      do{
        cout<<(q->data)<<" ";
        q=q->next;
      }while (q!=head);
      
   }

private:
    Node *head;
    Node *tail;
};
int main(int argc, char const *argv[])
{   Cll x;
    x.creatNode(2);
    x.creatNode(4);
    x.creatNode(6);
    x.creatNode(8);
    x.printCll();
    cout <<"Baap________Hu_________Mc"<<endl;
    return 0;
}
