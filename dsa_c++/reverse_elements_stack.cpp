#include <bits/stdc++.h>
using namespace std;
void insertatBottom(stack<int>&st,int data);
void reverse(stack<int>& st)
{
    int data;
    if (st.empty())
    {
        return;
    }
    data = st.top();
    st.pop();
    reverse(st);
    insertatBottom(st, data);
}
void insertatBottom(stack<int> & st, int data)
{
    int temp;
    if (st.empty())
    {

        st.push(data);
        return;
    }
    temp = st.top();
    st.pop();
    insertatBottom(st, data);
    st.push(temp);
}
void print_stack(stack<int>st){
         while (!st.empty())
         {
                cout<<st.top();
                st.pop();
         }

}
int main(int argc, char const *argv[])
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    print_stack(st);

     reverse(st);
          cout<<"\n";
          print_stack(st);

    return 0;
}
