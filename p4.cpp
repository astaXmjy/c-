#include<iostream>
using namespace std;
int x=4;
 void print_arr(int arr[][4],int m,int n)
 {
      for (int i = 0; i < m; i++)
      {
         for (int j = 0; j < n; j++)
         {
            cout<<arr[i][j]<<" ";
         }
          cout<<" \n";
      }
      
 }
 int main(int argc, char const *argv[])
 {  
    int arr[2][4]={{2,3,45,5},{4,6,8,9}};
    print_arr(arr,2,4);
    return 0;
 }
 