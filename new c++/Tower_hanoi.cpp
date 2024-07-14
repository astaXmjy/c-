#include<bits/stdc++.h>
using namespace std;
int Tower_hanoi(int n,char from_rod,char to_rod,char aux_rod )
{
    if (n==1)
    {
        cout<<"moving disc 1"<<"from"<<from_rod<<"to"<<to_rod<<endl;
        
    }
    else{
    Tower_hanoi(n-1,from_rod,aux_rod,to_rod);
    cout<<"Moving disc"<<n<<"from"<<from_rod<<"to"<<to_rod<<endl;
    Tower_hanoi(n-1,aux_rod,to_rod,from_rod);
    }
    
}
int main(int argc, char const *argv[])
{      Tower_hanoi(3,'A','C','B');
    
    return 0;
}
