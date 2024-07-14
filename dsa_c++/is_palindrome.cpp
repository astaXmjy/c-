#include<bits/stdc++.h>
using namespace std;
int palindrome(string s)
{
   int i=0,j=s.length()-1;
   while (i<j&&s[i]==s[j])
   {
           i++; j--;
   }
   if (i<j)
   {
       cout<<"Not a palindrome"<<"\n";
       return 0;
   }
   else
   {
      cout<<"Is a palindrome"<<"\n";
      return 1;
   }
}
int palindrome_using_stack(string s,char x){
    int i=0;
    stack<char>st;
    while (s[i]!='x')
    {     st.push(s[i]);
        i++;
    }
    i++;
    while (s[i])
    {
        if (st.empty()||s[i]!=st.top())
        {
            return 0;
        }
        st.pop();
        i++;

    }
      if (st.empty())
      {
        return 1;
      }
      else
      {
        return 0;
      }
      

}
int main(int argc, char const *argv[])
{   palindrome("xxsxxx");
     palindrome("xxbbmbbxx");
    if (palindrome_using_stack("bAAAAxAAAAa",'x'))
    {
       cout<<"Palindrome"<<"\n";
    }
    else
    {
        cout<<"lele"<<"\n";
    }


    return 0;
}
