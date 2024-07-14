#include<bits/stdc++.h>
using namespace std;
bool is_operand(char c)
{
    return (c>='a'&&c<='z')||(c>='A'&& c<='Z');
}
string result(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (is_operand(s[i]))
        {    string s0(1,s[i]);
            st.push(s0);
        }
        else
        {
            string s1=st.top();
            st.pop();
            string s2=st.top();
            st.pop();
            st.push("( "+s2 + s[i] + s1+" )");

        }
        
    }
    
    return st.top();
}

int main(int argc, char const *argv[])
{
    

    cout<<result("abc+-");

    return 0;
}
