#include<bits/stdc++.h>
using namespace std;
int is_balance(string s)
{    stack<char> st;
     for ( int i = 0; i < s.length(); i++)
     {   stack<char> st;
        if (st.empty())
        {
            st.push(s[i]);
        }
        else if((st.top() == '(' && s[i] == ')')
                 || (st.top() == '{' && s[i] == '}')
                 || (st.top() == '[' && s[i] == ']'))
        {
          st.pop();
            
            
        }
        else
        {
            st.push(s[i]);
        }
        
     }


     if (st.empty())
     {
          return 1;
     }
     return 0;
     
     
    
}
int main(int argc, char const *argv[])
{
    string x ="{{{}}}";

   if(is_balance(x)){
    cout<<"yo!";
   }

    return 0;
}
