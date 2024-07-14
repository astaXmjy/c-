#include<iostream>
#include<vector>
using namespace std;
int main(int argc, char const *argv[])
{
    vector< vector<int> > M(5, vector<int>(5));
for (int i = 0; i < 5; i++)
{
    for ( int j = 0; j < 5; j++)
    {
        cin>>M[i][j];
    }
    
}

for (int i = 0; i < 5; i++)
{
    for ( int j = 0; j < 5; j++)
    {
        cout<<M[i][j];
    }
    cout<<"\n";
    
}


    return 0;
}
