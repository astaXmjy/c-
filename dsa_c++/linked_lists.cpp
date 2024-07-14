#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int value;
    struct Node *next;
};
class Linkedlists
{
public:
    Linkedlists()
    {
        head = nullptr;
        tail = nullptr;
    }
    void createNode(int x)
    {
        Node *temp = new Node;
        temp->value = x;
        temp->next = nullptr;
        if (head == nullptr)
        {
            head = temp;
            tail = temp;
        }
        else
        {

            tail->next = temp;
            tail = temp;
        }
    }

    void pushNode(int value)
    {
        Node *new_node;
        new_node = new Node;

        new_node->value = value;
        new_node->next = head;
        head = new_node;
    }

    void insertNodeAtPosition(int pos, int value)
    {
        Node *prev = new Node;
        Node *current = new Node;
        Node *temp = new Node;

        current = head;
        for (int i = 0; i < pos; i++)
        {
            prev = current;
            current = current->next;
        }
        temp->value = value;
        prev->next = temp;
        temp->next = current;
    }

    int pop()
    {
        int retval = 0;
        Node *next_node = nullptr;

        next_node = head->next;
        retval = head->value;
        delete head;
        head = next_node;

        return retval;
    }

    int removeLast()
    {
        int retval = 0;
        if (head->next == nullptr)
        {
            retval = head->value;
            delete head;
            return retval;
        }

        Node *curr = head;
        while (curr->next->next != nullptr)
        {
            curr = curr->next;
        }

        retval = curr->next->value;
        delete curr->next;
        curr->next = nullptr;
        return retval;
    }

    int removeByIndex(int n)
    {
        int retval;
        Node *curr = head;
        Node *temp = nullptr;

        if (n == 0)
        {
            return pop();
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (curr->next == nullptr)
            {
                return -1;
            }
            curr = curr->next;
        }
        temp = curr->next;
        retval = temp->value;
        curr->next = temp->next;
        delete temp;
        return retval;
    }
    void removeByValue(int value)
    {
        Node *previous;
        Node *current;

        if (head == nullptr)
        {
            return;
        }

        if (head->value == value)
        {
            return;
            pop();
        }

        previous = current = head->next;
        while (current)
        {
            if (current->value == value)
            {
                previous->next = current->next;
                delete current;
                return;
            }

            previous = current;
            current = current->next;
        }
    }
    void deleteLL()
    {
        Node *aux = nullptr;
        Node *curr = head;

        while (curr)
        {
            aux = curr->next;
            delete curr;
            curr = aux;
        }
        head=nullptr;
    }
    int length()
    {
        int len = 0;
        Node *curr = head;
        while (curr != nullptr)
        {
            len++;
            curr = curr->next;
        }

        return len;
    }
    void printList()
    {
        if (length() > 0)
        {
            Node *current = head;
            while (current != nullptr)
            {
                cout << current->value << " ";
                current = current->next;
            }
        }

        else
        {
            cout<<"Does not have any nodes:"<<endl;
        }
        
    }

private:
    Node *head;
    Node *tail;
};

int main(int argc, char const *argv[])
{
    Linkedlists obj;
    obj.createNode(4);
    obj.createNode(6);
    obj.createNode(8);
    obj.pushNode(688);
    obj.insertNodeAtPosition(2, 54);
    obj.printList();
    cout << endl;
    cout << obj.length();
    obj.deleteLL();
    obj.printList();
    return 0;
}
