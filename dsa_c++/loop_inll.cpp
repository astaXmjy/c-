#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    struct Node* next;
};

bool detectloop(struct Node* h)
{
    unordered_set<Node*>s;
    while (h!=NULL)
    {
        
        if (s.find(h)!=s.end())
        {
            return true;
        }
        s.insert(h);
        h=h->next;
    }
    return false;
}
int getcount(struct Node* head)
{
    int count=0;
     struct Node* curr=head;
     while (curr!=NULL)
     {
        count++;
        curr=curr->next;
     }
     return count;
}

int getIntersectionNOde(struct Node* head1,struct Node* head2)
{
       int d;
       int c1=getcount(head1);
       int c2=getcount(head2);
       if (c1>c2)
       {   d=c1-c2;
           return _getIntersectionNode(d,head1,head2);
       }
       else
       {
         d=c2-c1;
         return _getIntersectionNode(d,head2,head1);
       }    
}

int _getIntersectionNode(int d,struct Node* head1,struct Node* head2)
{
    Node* curr1=head1;
    Node* curr2=head2;

    for (int i = 0; i < d; i++)
    {
        if (curr1==NULL)
        {
              return -1;
        }

        curr1=curr1->next;
         
    }

    while (curr1!=NULL && curr2!=NULL)
    {
          if (curr1==curr2)
          {
            return curr1->data;
          }
          curr1=curr1->next;
          curr2=curr2->next;
    }

    return -1;
}

int detectloop1(struct Node* h)
{
    struct Node* s=h;
    struct Node* f=h;
    while (s && f&&f->next)
    {
        s=s->next;
        f=f->next->next;
        if (s==f)
        {
            return 1;
        }
        
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    cout<<"jldi yaha s hato !!!!";
    return 0;
}
