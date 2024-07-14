#include<bits/stdc++.h>
using namespace std;
int precedence(char c)
{
    if (c=='+'||c=='-')
    {
      return 1;
    }
    else if(c=='*'||c=='/')
    {
        return 2;
    }

    else if (c=='^')
    
    {
        return 3;
    }
    
    else
    {
        return -1;
    }
    
}
void infix_to_prefix(string s)
{
    stack<char>st;
    string temp;
    for (int  i = 0; i < s.length(); i++)
    {
    if ((s[i]>='a' && s[i]<='z')|| (s[i] >= 'A' && s[i] <= 'Z')
            || (s[i] >= '0' && s[i] <= '9'))
    {
        temp+=(s[i]);
    }
    else if (s[i]=='(')
    {
        st.push(s[i]);
    }
    else if (s[i]==')')
    {
        while (st.top()!='(')
        {   
            temp+=(st.top());
            st.pop();
            
        }
        st.pop();
        
    }
    
    else
    {
        
            while ((!st.empty())&& (precedence(s[i])<=precedence(st.top())))
            {
                
                temp+=(st.top());
                st.pop();
            }
            st.push(s[i]);
        }
        
    
    

    }

    while (!st.empty())
    {
        temp+=(st.top());
        st.pop();
    }
    
    
    cout<<temp;
    
}
int main(int argc, char const *argv[])
{
    infix_to_prefix("(A+B)^88");
    
    return 0;
}
