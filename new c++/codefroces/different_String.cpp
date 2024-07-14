#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while (t--)
    {   string s;
         cin>>s;
        unordered_map<char,int> mp;
        for(auto x:s){
            mp[x]++;
        }
        if(mp.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<s.size()-1;i++){
                if(s[i]!=s[i+1]){
                    swap(s[i],s[i+1]);
                    break;
                }
            }

            cout<<s<<endl;
        }
    }

    return 0;
}
