#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{  int n,m;
   cout<<"Enter the number of rows that you want in matrix : ";
   cin>>n;
   cout<<"Enter the number of elements that you want in each row : ";
   cin>>m;

//  Allocating mwmory dynamically to matrix

    int **M=new int*[n];
    for (int i = 0; i < n; i++)
    {
        M[i]=new int [m];

    }

//  Deleting  Memory to an matrix
M[1][2]=8;
for ( int i = 0; i < n; i++)
{
    delete [] M[i]; //  deleting an ith row
    delete [] M;  //  deleting an entire matrix;

}

cout<<M[1][2];
    M[1][2]=9;
    cout<<"\n";

    cout<<M[1][2];
    
    return 0;
}
