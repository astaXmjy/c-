#include<bits/stdc++.h>
using namespace std;

void dirn(int *a)
{
    int b;
    if (a<&b)
    {
        cout<<"Stack grows up"<<endl;
    }
    else
    {
        cout<<"Stack grows down"<<endl;
    }
    
}

 int main(int argc, char const *argv[])
 {
    int a;
    dirn(&a);
    return 0;
 }
