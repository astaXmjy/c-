#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    map<int,string> m;
    m[1]="abc";
    m[5]="gjgj";
    m[3]="uiohji";
    m.insert({4,"uiieh"});

   auto it =m.find(3); /// if 3 not in map then it return end iterator
   m.erase(3);
    // map<int,string> :: iterator it;

    // for (it=m.begin(); it!= m.end(); it++)
    // {   
    //     cout<<it->first<<" "<<it->second<<" ,";
    // }

    for(auto &pr:m){
        cout<<pr.first<<" "<<pr.second;
    }

    return 0;
}
