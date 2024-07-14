
#include<iostream>
using namespace std;
int main()
{   int n;
  cout<<"Enter the value of n: ";
  cin>>n;
      int arr[n][n];
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
    
        {
            cin>>arr[i][j];
            cout<<"\n";
        }
        
      }
      cout<<"printing array :"<<endl;
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
        
      }
      

    for ( int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
        
    }
    
         cout<<"printing  transpose array :"<<endl;
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
        
      }
    return 0;
}