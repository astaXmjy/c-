#include<bits/stdc++.h>
using namespace std;
void print_map(map<int,string> &m)
{
         for (auto pr: m)
   {
       cout<<"{"<<pr.first<<" "<<pr.second<<"}"<<endl;
   }
}
int main(int argc, char const *argv[])
{
    // map
   map<int,string> m;
   m[0]="efe";
   m[1]="bhbh";
   m[4]="zoro";
   m[6]="luffy";
   m.insert({3,"fsd"});
   /*map<int ,string>::iterator it;
   for (it=m.begin(); it!=m.end(); it++)
   {
       cout<<"{"<<it->first<<" "<<it->second<<"}"<<endl;
   }*/
  auto it=m.find(3);
  if (it==m.end())
  {
     cout<<"no value found ! ."<<endl;
  }
  else
  {
     cout<<it->first<<" "<<it->second<<endl;
  }
   map<string,int> m1;
   int n;
   cin>>n;
   for (int i = 0; i < n; i++)
   {
      string s;
      cin>>s;
      m1[s]++;
   }
   for (auto pr1:m1)
   {
      cout<<pr1.first<<" "<<pr1.second<<endl;
   }
   
    return 0;
}
