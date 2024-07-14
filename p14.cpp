#include<iostream>
const int N=3;
using namespace std;
int Sum (int i, int j, int matrix[][N],int y)
{


  if ((i == 0) && (j == 0))
    return matrix[i][j];	

  if (j == 0)
    return matrix[i][j] + Sum (i - 1, y,  matrix, y);	

  else
    return matrix[i][j] + Sum (i, j - 1,  matrix, y);	

}

int main(int argc, char const *argv[])
{   int rows=3,col=N;
    int arr[3][3]={{12,12,12},{1,12,12},{1,1,1}};
     int r = rows - 1;
  int c = col - 1;

  int x = rows - 1;
  int y = col - 1;



  int s = Sum (r, c, arr, y);
  cout<<s;
    return 0;
}
