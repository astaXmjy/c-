#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    pair<int,string>p;
    p={1,"zoro"};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>p_arr[3];
    p_arr[0]={1,2};
    p_arr[1]={2,2};
    p_arr[2]={4,5};
    swap(p_arr[0],p_arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout<<p_arr[i].first<<" "<<p_arr[i].second<<endl;
    }
    
    return 0;
}
