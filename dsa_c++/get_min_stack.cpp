#include <bits/stdc++.h>
using namespace std;
class Mystack{
      stack<int> s;
      int minEle;

      void getMin()
      {
        if (s.empty())
        {
            cout<<"Stack is empty\n";

        }
        else
        {

            cout<<"Minimun Element in the stack is: "
            <<minEle<<"\n";
        }
      }
      void peek()
      {
        if(s.empty())
        {
            cout<<"Stack is empty";
        }
        int t=s.top();
        cout<<"Top of stack is: ";
        (t<minEle)?cout<<minEle : cout<<t;
      }
      void pop()
      {
        if (s.empty())
        {
            cout<<"Stack is empty \n";
        }
        cout<<"Top most element removed: ";
        int t=s.top();
        s.pop();
        if (t<minEle)
        {
            cout<<minEle<<"\n";
            minEle=2*minEle-t;
        }
        else
        {
            cout<<t<<"\n";
        }
        
        
        
      }
      void push(int x)
      {
        if (s.empty())
        {
            minEle=x;
            s.push(x);
            cout<<"Number Inserted: "<<x<<"\n";
            return ;


        }
        else if (x<minEle)
        {
            s.push(2*x -minEle);
            minEle=x;

        }
        else
        {
            s.push(x);
            cout<<"Number Inserted: "<<x<<"\n";
        }
        
        
        
      }
};
int min(int a,int b)
{return a>b?b:a;}
class MinStack{
   public:
   stack<pair<int,int>>s;
   void push(int element){
    int new_min=s.empty()?element:min(element,s.top().second);
    s.push({element,new_min});
   }
   int pop()
   {
    int popped;
    if (!s.empty())
    {
        popped=s.top().first;
        s.pop();
    }
    else
    {
        cout<<"error empty :"<<"\n";
    }
    return popped;
    
   }
   int minimum()
   {
    int min_elem=s.top().second;
    return min_elem;
   }

};
int main(int argc, char const *argv[])
{

    return 0;
}
