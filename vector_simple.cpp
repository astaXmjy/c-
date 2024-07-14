#include<bits/stdc++.h>
using namespace std;
int index(vector<int>& v,int data)
{
    for (int i = 0; i <v.size(); i++)
    {
        if (v[i]==data)
        {
            return i;
        }
        
    }
    
    
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    v={1,4,5,43,45,54};
int i=index(v,45);
cout<<i;
    return 0;
}
