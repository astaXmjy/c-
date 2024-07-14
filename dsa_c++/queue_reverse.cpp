#include<bits/stdc++.h>
using namespace std;
void  reverseQueue( queue<int> &q)
{
    stack <int> s;
   while (!q.empty())
   {
      s.push(q.front());
      q.pop();
   }
   while (!s.empty())
   {
      q.push(s.top());
      s.pop();
   }
}
void printQueue(queue<int>q){
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<"\n";
}
int main(int argc, char const *argv[])
{
   queue <int> q;
   q.push(1);
      q.push(2);
         q.push(3);
            q.push(4);

   printQueue(q);


   reverseQueue(q);

   printQueue(q);
       return 0;
}
