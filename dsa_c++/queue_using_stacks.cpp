#include<bits/stdc++.h>
using namespace std;

class queu{
    private:
    stack<int> s_1,s_2;

    public:
    void enqueue(int x)
    {
        while (!s_1.empty())
        {
            s_2.push(s_1.top());
            s_1.pop();
        }
        s_1.push(x);

        while (!s_2.empty())
        {
            s_1.push(s_2.top());
            s_2.pop();
        }
        
    }

    int dequeue()
    {
        if(s_1.empty( ))
        {
            return -1;
        }

        int x=s_1.top();

        s_1.pop();

        return x;
    }

};

int main(int argc, char const *argv[])
{
    queu o;
    o.enqueue(2);
    o.enqueue(22);
    o.enqueue(222);
    o.enqueue(2222);

    cout<<o.dequeue()<<"\n";
    cout<<o.dequeue()<<"\n";
    cout<<o.dequeue()<<"\n";




    return 0;
}
