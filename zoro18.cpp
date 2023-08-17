#include<iostream>
using namespace std;
void insertion_sort(char * x,int n)
{    int j;
     char temp;
    for (int i = 1; i < n; i++)
    {
        j=i-1;
        temp=x[i];
        while (j>=0 && x[j]>temp)
        {
            x[j+1]=x[j];
            j--;
        }
        x[j+1]=temp;
        
    }
    
}
void print_array(char *x,int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<x[i]<<" ";
    }
    
}
int main(int argc, char const *argv[])
{
    char x[]={'b','h','a','t','w','i'};
     int size=sizeof(x)/sizeof(char);
     insertion_sort(x,size);
     print_array(x,size);
    return 0;
}
 