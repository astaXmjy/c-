#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node *prev;
};
class doublyLL
{
public:
    doublyLL()
    {
        head = nullptr;
        tail = nullptr;
    }
    void insertNode(int data)
    {
        node *temp = new node;
        temp->value = data;
        temp->next = nullptr;
        temp->prev = nullptr;
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }
    void insertFromHead(int data)
    {
        node *temp = new node;
        if (head == nullptr)
        {
            insertNode(data);
        }
        else
        {
            temp->value = data;
            head->prev = temp;
            temp->next = head;
            temp->prev = nullptr;
            head = temp;
        }
    }

    void insertAtIndex(int pos,int data)
    {
        node* temp=new node;
        node* curr=head;
        node* Xcurr=nullptr;
        for (int i = 0; i < pos; i++)
        {   Xcurr=curr;
            curr=curr->next;
        }
        temp->value=data;
        temp->next=curr;
        temp->prev=Xcurr;
        Xcurr->next=temp;
        curr->prev=temp;
        
    }
    void printll()
    {
        node *curr = head;
        do
        {
            cout << curr->value << " ";
            curr = curr->next;
        } while (curr != nullptr);
    }

private:
    node *head;
    node *tail;
};

int main(int argc, char const *argv[])
{
    doublyLL x;
    x.insertNode(3);
    x.insertNode(4);
    x.insertNode(5);
    x.insertNode(6);
    x.insertFromHead(44);
    x.insertAtIndex(2,78);
    x.printll();
    return 0;
}
 