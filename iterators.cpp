#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>::iterator it;
    for ( it=v_p.begin();it!=v_p.end(); it++)
    {
        cout<<"{"<<(*it).first<<" "<<(*it).second<<"}";
    }
    return 0;
}
