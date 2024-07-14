#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a (n);
        vector<int> b (n);
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a[i]=x;
        }
             for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b[i]=x;
        }
        int Bankai=0;
        for(int i=0;i<n;i++){
           if(a[i]>b[i]){
             a.pop_back();
             a.push_back(b[i]);
             sort(a.begin(),a.end());
             Bankai++;
           }
        }

        cout<<Bankai<<endl;

    }
    return 0;
}

