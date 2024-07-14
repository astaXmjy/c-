#include<bits/stdc++.h>
using namespace std;

int*  finding_Span(int arr[],int n){
    int i,j,s[n];
    for (int  i = 0; i < n; i++)
    {
        j=1;
        while (j<=i && arr[i]>arr[i-j])
        {
            j++;
        }
        s[i]=j;
    }

    return s;

}

int main(int argc, char const *argv[])
{

    return 0;
}
