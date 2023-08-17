#include<bits/stdc++.h>
using namespace std;
stack<char>s;
bool paraenthesis_matching(string x,int size)
{
     for (int i = 0; i < size; i++)
     {
        if (x[i]=='{'||x[i]=='('||x[i]=='[')
        {
            s.push(x[i]);
        }
        else if (x[i]=='}'||')'||']')           
        {
            if (s.empty())
            {
                return false;
            }
            if (x[i]!='{'&& s.top()=='}'||x[i]!='['&& s.top()==']'||x[i]!='('&& s.top()==')')
            {
                return false;
            }
            s.pop();
            
        }
        

     }
     if (s.empty())
     {
        return true;
     }
     else{return false;}
     
}
int main(int argc, char const *argv[])
{
     string x{"{{()}"};
     int y=x.size();
   cout<< paraenthesis_matching(x,y);
    return 0;
}
