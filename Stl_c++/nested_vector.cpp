#include<bits/stdc++.h>
using namespace std;
// void printVec(vector<pair<int,int>> &v)
// {
//     cout<<"Size: "<<v.size()<<endl;
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout<<v[i].first<<" "<<v[i].second<<endl;
//     }
    
// }
void printVec(vector<int>&v)
{
    cout<<"Size: "<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";

    }

    
}
int main(int argc, char const *argv[])
{
//     vector<pair<int,int>> v;


//     printVec(v);
//   int n;
//   cin>>n;
//   for (int i = 0; i < n; i++)
//   {
//     int x,y;
//     cin>>x>>y;
//     v.push_back({x,y});

//   }
//   printVec(v);
  int N;
  cin>>N;
  vector<vector<int>> v;

  for (int i = 0; i < N; i++)
  {
    int n;
    cin>>n;
    vector<int> temp;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin>>x;
        temp.push_back(x);
    }
    v.push_back(temp);
  }
  

  printVec(v[0]); 

    return 0;
}
