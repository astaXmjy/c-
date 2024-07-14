#include<stdio.h>
int main(int argc, char const *argv[])
{
    
    int * fuck;
   for (int i = 0; i < 5; i++)
   {
      scanf("%d",fuck+i);
   }
    for (int i = 0; i < 5; i++)
    {
        printf("%d",*(fuck+i));
    }
    

    return 0;
}
