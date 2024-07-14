#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int arr[7]={1,2,3,4,5,6};
    bool isSwaped=true;;
    for(int pass=6;pass>=0 and isSwaped;pass--){
        isSwaped=false;
        for(int i=0;i<7;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                isSwaped=true;
            }
        }
    }

    for(int i=0;i<7;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}
