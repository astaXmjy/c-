#include<bits/stdc++.h>
using namespace std;

bool isUnique(string& s){
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1] and i<s.length()) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{      string s="";
       bool ans=isUnique(s);
       cout<<ans;

    return 0;
}
