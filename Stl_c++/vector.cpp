#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v)
{
    cout<<"Size :"<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(int argc, char const *argv[])
{
    vector<int> v;
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    v.pop_back();
       
    printVec(v);
  
    return 0;
}
